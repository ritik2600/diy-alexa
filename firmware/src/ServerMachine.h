#ifndef _server_machine_h_
#define _server_machine_h_

class ServerMachine
{
// private:
//     std::map<std::string, int> m_device_to_pin;
//     IntentResult turnOnDevice(const Intent &intent);
//     IntentResult changeColour(const Intent &intent);
//     IntentResult tellJoke();
//     IntentResult life();
//     IntentResult tellTime();
//     IntentResult startGame(const Intent &intent);
//     IntentResult moveDirection(const Intent &intent);

//     Speaker *m_speaker;

public:
    ServerMachine(WebServer server);
    void mazeOn(const Intent &intent);
    // IntentResult processIntent(const Intent &intent);
};

#endif
