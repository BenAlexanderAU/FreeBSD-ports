--- ipc/ipc_channel_mojo.cc.orig	2019-04-08 08:32:59 UTC
+++ ipc/ipc_channel_mojo.cc
@@ -64,7 +64,7 @@ class MojoChannelFactory : public ChannelFactory {
 };
 
 base::ProcessId GetSelfPID() {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   if (int global_pid = Channel::GetGlobalPid())
     return global_pid;
 #endif  // OS_LINUX
