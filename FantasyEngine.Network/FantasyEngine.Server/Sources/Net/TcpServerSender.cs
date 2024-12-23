﻿using System.Net.Sockets;

namespace FantasyEngine.Network.Core
{
    public sealed class TcpServerSender : SocketSender
    {
        public TcpServerSender(ISocket socket) : base(socket)
        {
        }

        protected override void TrySendAsync(SocketAsyncEventArgs ioEventArgs)
        {
            if (!ioEventArgs.AcceptSocket.SendAsync(ioEventArgs))
            {
                ProcessSend(ioEventArgs);
            }
        }
    }
}