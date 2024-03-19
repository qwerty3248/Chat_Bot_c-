#include <iostream>
#include <string>
#include <map>
#include <vector>

// Define a struct for chatbot responses
struct Response {
    std::string input;
    std::string output;
};

// Define a function to train the chatbot
void trainChatbot(std::map<std::string, std::vector<Response>>& chatbot, const std::string& input, const std::string& output) {
    chatbot[input].push_back({input, output});
}

// Define a function to get a response from the chatbot
std::string getResponse(const std::map<std::string, std::vector<Response>>& chatbot, const std::string& input) {
    if (chatbot.find(input) != chatbot.end()) {
        const auto& responses = chatbot.at(input);
        return responses[rand() % responses.size()].output;
    }
    return "No se responder a eso, Lo siento";
}

// Define a function to start the chatbot
void startChatbot(const std::map<std::string, std::vector<Response>>& chatbot) {
    std::string input;
    while (true) {
        std::cout << "User: ";
        std::getline(std::cin, input);
        if (input == "quit" || input == "q") {
            break;
        }
        std::cout << "Chatbot: " << getResponse(chatbot, input) << std::endl;
    }
}

int main() {
    // Train the chatbot
    
    std::cout<<"Antes de empezar el chatbot, para escribir debes de entender las siguientes cosas:\n1-Debes escribir la primera siempre en mayuscula\n2-Las preguntas solo llevan signos de interrogacion al final\n3-No hay tildes\n4-Es en español\n5-Para salir debes de escribir quit o q  como respuesta al chatbot\n6-Disfruta del chatbot\n";
    
    std::map<std::string, std::vector<Response>> chatbot;
    trainChatbot(chatbot, "Hola", "Hola como va");
    trainChatbot(chatbot, "Como estas?", "Soy un simple programa asi que no puedo opinar");
    trainChatbot(chatbot, "Como estas", "Soy un simple programa asi que no puedo opinar");
    trainChatbot(chatbot, "Cual es tu nombre?", "Soy chatbot");
    trainChatbot(chatbot, "Cual es tu nombre", "Soy chatbot");
    trainChatbot(chatbot, "Bien y a ti", "Supongo que bien encerrado en un ordenador pero bueno");
    trainChatbot(chatbot, "Bien y a ti?", "Supongo que bien encerrado en un ordenador pero bueno");
    trainChatbot(chatbot, "Bien", "Me alegro");
    trainChatbot(chatbot, "Cual es tu juego favorito?", "El profesor layton la caja de pandora o alguno de inazuma eleven");
    trainChatbot(chatbot, "Cual es tu juego favorito", "El profesor layton la caja de pandora o alguno de inazuma eleven");
    trainChatbot(chatbot, "Eres una IA?", "Que va me a programado Francisco Jesús Losada Arauzo asi que no");
    trainChatbot(chatbot, "Eres una IA", "Que va me a programado Francisco Jesús Losada Arauzo asi que no");
    trainChatbot(chatbot, "Quien es tu creador?", "Francisco Jesús Losada Arauzo");
    trainChatbot(chatbot, "Quien es tu creador", "Francisco Jesús Losada Arauzo");
    trainChatbot(chatbot, "", "Si no dices nada puedo responderte");
    trainChatbot(chatbot, "Adios", "Aips");
    trainChatbot(chatbot, "Que te gusta ver en tu tiempo de ocio?", "En youtube me gusta ver a IlloJuan para juegos,  BlissfulPiano para musica y para aprender a programar ProgramadorJunior24, que de hecho es mi creador");
    trainChatbot(chatbot, "Personas de youtube que te gusten", "IlloJuan, Masi, BlissfulPiano, ProgramadorJunior24");
    trainChatbot(chatbot, "Que te gusta?", "Youtube");
    trainChatbot(chatbot, "Que te ver?", "Youtube");
    trainChatbot(chatbot, "Que te ver", "Youtube");
    trainChatbot(chatbot, "Que te gusta", "Youtube");
    trainChatbot(chatbot, "Que te gusta ver en youtube?", "IlloJuan para juegos,  BlissfulPiano para musica y para aprender a programar ProgramadorJunior24, que de hecho es mi creador");
    trainChatbot(chatbot, "Que te gusta ver en youtube", "IlloJuan para juegos,  BlissfulPiano para musica y para aprender a programar ProgramadorJunior24, que de hecho es mi creador");
    trainChatbot(chatbot, "Que carrera prefieres?", "Todas me parecen interesantes y tienen su punto de dificultad");
    trainChatbot(chatbot, "Que carrera prefieres", "Todas me parecen interesantes y tienen su punto de dificultad");
    trainChatbot(chatbot, "Y a ti", "Esperando al dia del juicio final");
    trainChatbot(chatbot, "Y a ti?", "Esperando al dia del juicio final");
    trainChatbot(chatbot, "Que te gusta ver en tu tiempo de ocio", "En youtube me gusta ver a IlloJuan para juegos,  BlissfulPiano para musica y para aprender a programar ProgramadorJunior24, que de hecho es mi creador");

    // Start the chatbot
    startChatbot(chatbot);

    return 0;
}
