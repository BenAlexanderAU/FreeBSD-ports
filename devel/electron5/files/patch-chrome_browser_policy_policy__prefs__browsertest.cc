--- chrome/browser/policy/policy_prefs_browsertest.cc.orig	2019-04-08 08:32:45 UTC
+++ chrome/browser/policy/policy_prefs_browsertest.cc
@@ -185,6 +185,8 @@ class PolicyTestCase {
     const std::string os("chromeos");
 #elif defined(OS_LINUX)
     const std::string os("linux");
+#elif defined(OS_FREEBSD)
+    const std::string os("freebsd");
 #else
 #error "Unknown platform"
 #endif
