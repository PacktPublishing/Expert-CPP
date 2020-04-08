class Networking
{
public:
  void start_server();

public:
  std::shared_ptr<Networking> get_instance();
  void remove_instance();

private:
  Networking();
  ~Networking();

private:
  int socket_;
  sockaddr_in server_;
  std::vector<sockaddr_in> clients_;

private:
  static std::shared_ptr<Networking> instance_ = nullptr;
  static int MAX_QUEUED_CONNECTIONS = 1;
};

void Networking::start_server()
{
  socket_ = socket(AF_INET, SOCK_STREAM, 0);
  // the following check is the only one in this code snippet
  // we skipped checking results of other functions for brevity, 
  // you shouldn't omit them in your code
  if (socket_ < 0) { 
    throw std::exception("Cannot create a socket");
  }
  
  struct sockaddr_in server;
  server.sin_family = AF_INET;
  server.sin_port = htons(port);
  server.sin_addr.s_addr = INADDR_ANY;

  bind(s, (struct sockaddr*)&server, sizeof(server));
  listen(s, MAX_QUEUED_CONNECTIONS);
  // the accept() should be here
}