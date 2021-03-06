/*
	Exile CLS Server Addon Configuration
	Written by Salutesh
	www.reality-gaming.eu
*/

class CfgPatches
{
	class a3_exile_cls
	{
		units[] = {};
		weapons[] = {};
		exile_expansion_version = "September 15, 2017";
		requiredVersion = 1.66;
		requiredAddons[] = {"exile_client","exile_server_config"};
	};
};

class CfgFunctions
{
	class Exile_CLS
	{	
		tag = "Exile_CLS";
		class Master
		{
			file = "a3_exile_cls";
			class preInit 									{preInit = 1;};
			class postInit 									{postInit = 1;};
		};
		class Functions
		{
			file = "a3_exile_cls\functions";
			class AddHoldAction									{};
			class ImportInteractionCrates						{};
		};
	};
};
