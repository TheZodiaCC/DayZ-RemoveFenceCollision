class CfgMods
{
	class BaseTweak
	{
	    dir = "BaseTweak";
	    picture = "";
	    action = "";
	    hideName = 1;
	    hidePicture = 1;
	    name = "BaseTweak";
	    credits = "";
	    author = "";
	    authorID = "0";
	    version = "1.0";
	    extra = 0;
	    type = "mod";

	    dependencies[] = {"World"};

	    class defs
	    {
	        class worldScriptModule
            {
                value = "";
                files[] = {"BaseTweak/scripts/4_World"};
            };
        };
    };
};
class CfgPatches
{
    class BaseTweakScipts
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
	{
		"DZ_Data"
	};
    };
};
