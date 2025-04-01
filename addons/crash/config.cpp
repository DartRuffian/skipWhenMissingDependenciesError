/*
 This addons requires an addon with skipWhenMissingDependencies = 1
 If `swmd_main` is skipped, then this addon will cause the game to close with a "circular dependency error"
 */

class CfgPatches {
    class swmd_crash {
        author = "DartRuffian";
        authors[] = {"DartRuffian"};
        name = "skipWhenMissingDependencies Crash";
        requiredVersion = 2.18;
        requiredAddons[] = {
            "swmd_main"
        };
        units[] = {};
        weapons[] = {};
    };
};