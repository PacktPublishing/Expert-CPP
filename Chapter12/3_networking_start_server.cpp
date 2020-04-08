void Networking::start_server()
{
  // code omitted for brevity (see in the previous snippet)
  while (true) {
    sockaddr_in client;
    int addrlen;
    int new_socket = accept(socket_, (sockaddr_in*)&client, &addrlen);
    clients_.push_back(client);
  }
}