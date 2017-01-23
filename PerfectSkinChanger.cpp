
#include "stdafx.h"
#include "PluginSDK.h"
#include "PerfectSkinChanger.h"
#include "Color.h"

PluginSetup("Teemo");

/*
* Drawing
*/
IMenuOption* EnableSkins;
IMenuOption* SkinID;

/*
* Menu
*/
IMenu* Menu;
IMenu* SubMenu;
IMenu* Skins;
IMenu* Drawing;

#pragma region Events
void MenuItem()
{
	/*
	* Draw Main Menu
	*/
	Menu = GPluginSDK->AddMenu("PerfectSkinChanger");
	/*
	* Draw category Skins
	*/
	Skins = Menu->AddMenu("Skins");

	/*
	* Skins category options
	*/
	EnableSkins = Skins->CheckBox("Enabled", false);
	SkinID = Skins->AddInteger("Skin", 1, 27, 27);

}


void SkinChanger()
{
	if (SkinID->GetInteger() == 1)
	{
		GEntityList->Player()->SetSkinId(1);
	}
	if (SkinID->GetInteger() == 2)
	{
		GEntityList->Player()->SetSkinId(2);
	}
	if (SkinID->GetInteger() == 3)
	{
		GEntityList->Player()->SetSkinId(3);
	}
	if (SkinID->GetInteger() == 4)
	{
		GEntityList->Player()->SetSkinId(4);
	}
	if (SkinID->GetInteger() == 5)
	{
		GEntityList->Player()->SetSkinId(5);
	}
	if (SkinID->GetInteger() == 6)
	{
		GEntityList->Player()->SetSkinId(6);
	}
	if (SkinID->GetInteger() == 7)
	{
		GEntityList->Player()->SetSkinId(7);
	}
	if (SkinID->GetInteger() == 8)
	{
		GEntityList->Player()->SetSkinId(8);
	}
	if (SkinID->GetInteger() == 9)
	{
		GEntityList->Player()->SetSkinId(9);
	}
	if (SkinID->GetInteger() == 10)
	{
		GEntityList->Player()->SetSkinId(10);
	}
	if (SkinID->GetInteger() == 11)
	{
		GEntityList->Player()->SetSkinId(11);
	}
	if (SkinID->GetInteger() == 12)
	{
		GEntityList->Player()->SetSkinId(12);
	}
	if (SkinID->GetInteger() == 13)
	{
		GEntityList->Player()->SetSkinId(13);
	}
	if (SkinID->GetInteger() == 14)
	{
		GEntityList->Player()->SetSkinId(14);
	}
	if (SkinID->GetInteger() == 15)
	{
		GEntityList->Player()->SetSkinId(15);
	}
	if (SkinID->GetInteger() == 16)
	{
		GEntityList->Player()->SetSkinId(16);
	}
	if (SkinID->GetInteger() == 17)
	{
		GEntityList->Player()->SetSkinId(17);
	}
	if (SkinID->GetInteger() == 18)
	{
		GEntityList->Player()->SetSkinId(18);
	}
	if (SkinID->GetInteger() == 19)
	{
		GEntityList->Player()->SetSkinId(19);
	}
	if (SkinID->GetInteger() == 20)
	{
		GEntityList->Player()->SetSkinId(20);
	}
	if (SkinID->GetInteger() == 21)
	{
		GEntityList->Player()->SetSkinId(21);
	}
	if (SkinID->GetInteger() == 22)
	{
		GEntityList->Player()->SetSkinId(22);
	}
	if (SkinID->GetInteger() == 23)
	{
		GEntityList->Player()->SetSkinId(23);
	}
	if (SkinID->GetInteger() == 24)
	{
		GEntityList->Player()->SetSkinId(24);
	}
	if (SkinID->GetInteger() == 25)
	{
		GEntityList->Player()->SetSkinId(25);
	}
	if (SkinID->GetInteger() == 26)
	{
		GEntityList->Player()->SetSkinId(26);
	}
}

PLUGIN_EVENT(void) OnGameUpdate()
{
	if (EnableSkins->Enabled())
	{
		SkinChanger();
	}
}
#pragma endregion

// Called when plugin is first loaded
PLUGIN_API void OnLoad(IPluginSDK* PluginSDK)
{
	// Initializes global interfaces for core access
	PluginSDKSetup(PluginSDK);
	GEventManager->AddEventHandler(kEventOnGameUpdate, OnGameUpdate);
	MenuItem();
	SkinChanger();
	GRender->NotificationEx(Color::LightBlue2().Get(), 2, true, true, "PerfectSkinChanger - V0.1");
}

// Called when plugin is unloaded
PLUGIN_API void OnUnload()
{
	GEventManager->RemoveEventHandler(kEventOnGameUpdate, OnGameUpdate);
	Menu->Remove();
}

