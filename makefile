CC = g++
CFLAGS = -std=c++11 -Wall -O2
LDFLAGS =
TARGET = chatbot
SOURCES = Chatbot.cpp

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) $(LDFLAGS) -o $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)
