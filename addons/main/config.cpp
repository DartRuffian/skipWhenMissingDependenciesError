class CfgPatches {
    class swmd_main {
        author = "DartRuffian";
        authors[] = {"DartRuffian"};
        name = "skipWhenMissingDependencies Main";
        requiredVersion = 2.18;
        requiredAddons[] = {
            "aFakeAddon"
        };
        units[] = {};
        weapons[] = {};

        skipWhenMissingDependencies = 1;
    };
};