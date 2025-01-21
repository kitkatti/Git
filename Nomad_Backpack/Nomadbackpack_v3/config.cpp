class CfgPatches
{
	class Nomadbackpack
	{
		units[]=
		{
			"Nomadbackpack_v3_BaseColor",
			"Nomadbackpack_v3_Blue",
			"Nomadbackpack_v3_Teal",
			"Nomadbackpack_v3_Green",
			"Nomadbackpack_v3_Gray",
			"Nomadbackpack_v3_Red",
			"Nomadbackpack_v3_Yellow",
			"Nomadbackpack_v3_AoR2",
			"Nomadbackpack_v3_Woodland",
			"Nomadbackpack_v3_Winter",	
			"Kits_Bottle_v3_ArmyGreen",
			"Kits_Bottle_v3_Black",
			"Kits_Bottle_v3_Brown",
			"Kits_Bottle_v3_Teal",
			"Kits_Bottle_v3_Weed",
			"Kits_Bottle_v3_White",
			"Kits_Bottle_v3_Yellow"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Gear_Containers",
			"DZ_Gear_Consumables",
			"DZ_Gear_Tools",
			"DZ_Gear_Cooking",
			"DZ_Gear_Food",
			"DZ_Gear_Navigation",
			"DZ_Gear_Drinks",
			"DZ_Gear_Camping",
			"DZ_Gear_Optics",
			"DZ_Gear_Crafting",
			"DZ_Weapons_Firearms",
			"DZ_Radio",
			"DZ_Characters_Belts"
		};
	};
};
class CfgMods
{
	class Nomadbackpack_v3
	{
		dir="Nomadbackpack_v3";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Nomadbackpack_v3";
		credits="Kit";
		author="Kit";
		authorID="0";
		version="1.1";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Nomad_Backpack/Nomadbackpack_v3/scripts/4_world"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Canteen;
	class Kits_Bottle_v3_ColorBase: Canteen
	{
		scope=0;
		displayName="";
		model="\Nomad_Backpack\Nomadbackpack_v3\kits_bottle_v3.p3d";
		descriptionShort="Bottle to keep you hydrated during your adventures. Can be attached to the Nomadbackpack.";
		inventorySlot[]=
		{
			"Belt_Left",
			"Kits_Bottle"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Nomad_Backpack\Nomadbackpack_v3\data\kitsbottle_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Nomad_Backpack\Nomadbackpack_v3\data\kitsbittke.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Nomad_Backpack\Nomadbackpack_v3\data\kitsbittke.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Nomad_Backpack\Nomadbackpack_v3\data\kitsbittke_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Nomad_Backpack\Nomadbackpack_v3\data\kitsbittke_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Nomad_Backpack\Nomadbackpack_v3\data\kitsbittke_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Kits_Bottle_v3_ArmyGreen: Kits_Bottle_v3_ColorBase
	{
		scope=2;
		displayName="Armygreen Bottle";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\kits_bottle_v3_armygreen_co.paa"
		};
	};
	class Kits_Bottle_v3_Black: Kits_Bottle_v3_ColorBase
	{
		scope=2;
		displayName="Black Bottle";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\kits_bottle_v3_black_co.paa"
		};
	};
	class Kits_Bottle_v3_Brown: Kits_Bottle_v3_ColorBase
	{
		scope=2;
		displayName="Brown Bottle";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\kits_bottle_v3_brown_co.paa"
		};
	};
	class Kits_Bottle_v3_Grey: Kits_Bottle_v3_ColorBase
	{
		scope=2;
		displayName="Grey Bottle";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\kits_bottle_v3_grey_co.paa"
		};
	};
	class Kits_Bottle_v3_Teal: Kits_Bottle_v3_ColorBase
	{
		scope=2;
		displayName="Teal Bottle";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\kits_bottle_v3_teal_co.paa"
		};
	};
	class Kits_Bottle_v3_Weed: Kits_Bottle_v3_ColorBase
	{
		scope=2;
		displayName="Weed Bottle";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\kits_bottle_v3_weed_co.paa"
		};
	};
	class Kits_Bottle_v3_White: Kits_Bottle_v3_ColorBase
	{
		scope=2;
		displayName="White Bottle";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\kits_bottle_v3_white_co.paa"
		};
	};
	class Kits_Bottle_v3_Yellow: Kits_Bottle_v3_ColorBase
	{
		scope=2;
		displayName="Yellow Bottle";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\kits_bottle_v3_yellow_co.paa"
		};
	};
	class Clothing;
	class Nomadbackpack_v3_ColorBase: Clothing
	{
		displayName="Nomad backpack";
		descriptionShort="A backpack for Nomads with different attachements.";
		model="\Nomad_Backpack\Nomadbackpack_v3\nomadbackpack_v3_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=0;
		itemSize[]={6,7};
		itemsCargoSize[]={10,10};
		weight=3000;
		absorbency=0.2;
		heatIsolation=0.13;
		repairableWith[]={5,3};
		repairCosts[]={30,25};
		canBeDigged=1;
		soundAttType="Outdoor";
		attachments[]=
		{
			"belt_back",
			"waterproofbag",
			"GasCooker",
			"GPSReceiver",
			"Kits_Bottle",
			"Rangefinder",
			"WalkieTalkie",
			"Hatchet",
			"shoulder",
			"fishingpole",
			"sleepingbag",
			"tent"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		class ClothingTypes
		{
			male="\Nomad_Backpack\Nomadbackpack_v3\Nomadbackpack_v3.p3d";
			female="\Nomad_Backpack\Nomadbackpack_v3\Nomadbackpack_v3.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Nomad_Backpack\Nomadbackpack_v3\data\Nomadbackpack_v3.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{

								"Nomad_Backpack\Nomadbackpack_v3\data\Nomadbackpack_v3.rvmat"
							
							}
						},
						
						{
							0.5,
							
							{
								"Nomad_Backpack\Nomadbackpack_v3\data\Nomadbackpack_v3_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Nomad_Backpack\Nomadbackpack_v3\data\Nomadbackpack_v3_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Nomad_Backpack\Nomadbackpack_v3\data\Nomadbackpack_v3_destruct.rvmat"

							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
				{
					class pickUpItem_Light
					{
						soundSet="pickUpBackPack_Metal_Light_SoundSet";
						id=796;
					};
					class pickUpItem
					{
						soundSet="pickUpBackPack_Metal_SoundSet";
						id=797;
					};
					class drop
					{
						soundset="taloonbag_drop_SoundSet";
						id=898;
					};
				};
		};
	};
	
	class Nomadbackpack_v3_BaseColor: Nomadbackpack_v3_ColorBase
	{
		scope=2;
		descriptionShort="LightBlue Nomadbackpack";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\nomadbackpack_co.paa"
		};
	};
	class Nomadbackpack_v3_AoR2: Nomadbackpack_v3_ColorBase
	{
		scope=2;
		descriptionShort="AoR2 Nomadbackpack";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\nomadbackpack_aor2_co.paa"
		};
	};
	class Nomadbackpack_v3_Woodland: Nomadbackpack_v3_ColorBase
	{
		scope=2;
		descriptionShort="Woodland Nomadbackpack";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\nomadbackpack_woodland_co.paa"
		};
	};
	class Nomadbackpack_v3_Winter: Nomadbackpack_v3_ColorBase
	{
		scope=2;
		descriptionShort="Winter Nomadbackpack";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\nomadbackpack_winter_co.paa"
		};
	};
	class Nomadbackpack_v3_Blue: Nomadbackpack_v3_ColorBase
	{
		scope=2;
		descriptionShort="Blue Nomadbackpack";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\nomadbackpack_blue_co.paa"
		};
	};
	class Nomadbackpack_v3_Teal: Nomadbackpack_v3_ColorBase
	{
		scope=2;
		descriptionShort="Teal Nomadbackpack";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\nomadbackpack_teal_co.paa"
		};
	};
	class Nomadbackpack_v3_Grey: Nomadbackpack_v3_ColorBase
	{
		scope=2;
		descriptionShort="Grey Nomadbackpack";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\nomadbackpack_grey_co.paa"
		};
	};
	class Nomadbackpack_v3_Green: Nomadbackpack_v3_ColorBase
	{
		scope=2;
		descriptionShort="Green Nomadbackpack";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\nomadbackpack_green_co.paa"
		};
	};
	class Nomadbackpack_v3_Red: Nomadbackpack_v3_ColorBase
	{
		scope=2;
		descriptionShort="Red Nomadbackpack";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\nomadbackpack_red_co.paa"
		};
	};
	class Nomadbackpack_v3_Yellow: Nomadbackpack_v3_ColorBase
	{
		scope=2;
		descriptionShort="Yellow Nomadbackpack";
		hiddenSelectionsTextures[]=
		{
			"Nomad_Backpack\Nomadbackpack_v3\data\nomadbackpack_yellow_co.paa"
		};
	};
	class Container_Base;
	class Clothing_Base;
	class Transmitter_Base;
	class Inventory_Base;
	class FishingRod_Base_New;
	class ItemOptics;
	class ItemGPS;
	class Msp_Mattress_Base;
	class bl_craftable_ex_Kit;
	class GPSReceiver: ItemGPS
	{
		inventorySlot[]+=
		{
			"GPSReceiver"
		};
	};
	class Hatchet: Inventory_Base
	{
		inventorySlot[]+=
		{
			"Hatchet"
		};
	};
	class WaterproofBag_ColorBase: Container_Base
	{
		inventorySlot[]+=
		{
			"waterproofbag",
			"waterproofbag1",
			"waterproofbag2"
		};
	};
	class Rangefinder: ItemOptics
	{
		inventorySlot[]+=
		{
			"Rangefinder"
		};
	};
	class FishingRod: FishingRod_Base_New
	{
		inventorySlot[]+=
		{
			"Shoulder",
			"melee",
			"fishingpole",
			"fishingrod1",
			"fishingrod2",
			"fishingrod3",
			"fishingrod4",
			"fishingrod5",
			"fishingrod6",
			"fishingrod7",
			"fishingrod8",
			"fishingrod9",
			"fishingrod10"
		};
	};
	class MediumTent: Container_Base
	{
		inventorySlot[]+=
		{
			"tent"
		};
	};
	class LargeTent: Container_Base
	{
		inventorySlot[]+=
		{
			"tent"
		};
	};
	class PersonalRadio: Transmitter_Base
	{
		inventorySlot[]+=
		{
			"walkietalkie",
			"MassRadio"
		};
	};
	class PortableGasStove: Inventory_Base
	{
		inventorySlot[]+=
		{
			"GasCooker",
			"fishingpole"
		};
	};
	class Msp_Mattress_Green: Msp_Mattress_Base
	{
		inventorySlot[]+=
		{
			"sleepingbag"
		};
	};
	class Msp_Mattress_Pink: Msp_Mattress_Base
	{
		inventorySlot[]+=
		{
			"sleepingbag"
		};
	};
	class Msp_Mattress_Yellow: Msp_Mattress_Base
	{
		inventorySlot[]+=
		{
			"sleepingbag"
		};
	};
	class Msp_Mattress_Blue: Msp_Mattress_Base
	{
		inventorySlot[]+=
		{
			"sleepingbag"
		};
	};
	class bl_sleeping_bag_Kit: bl_craftable_ex_Kit
	{
		inventorySlot[]+=
		{
			"sleepingbag"
		};
	};
	class su_sleeping_bag_packed: Inventory_Base
	{
		inventorySlot[]+=
		{
			"sleepingbag"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyGPSReceiver: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"GPSReceiver"
		};
		model="\dz\gear\navigation\GPSReceiver.p3d";
	};
	class ProxyFishingrod: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"fishingpole"
		};
		model="\DZ\gear\tools\fishing_rod_closed.p3d";
	};
	class ProxyRangefinder: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"Rangefinder"
		};
		model="DZ\gear\optics\rangefinder.p3d";
	};
	class ProxyKits_bottle_v3: ProxyAttachment
	{
		scope=2;
		inventorySlot="Kits_bottle";
		model="\Nomad_Backpack\Nomadbackpack_v3\kits_bottle_v3.p3d";
	};
	class ProxyGasCooker: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"GasCooker"
		};
		model="\dz\gear\cooking\GasCooker.p3d";
	};
	class Proxytent_medium_packed: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"tent"
		};
		model="\DZ\gear\camping\tent_medium_packed.p3d";
	};
	class Proxywalkietalkie: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"walkietalkie"
		};
		model="\DZ\gear\radio\WalkieTalkie.p3d";
	};
	class ProxyWaterproofBag: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"waterproofbag"
		};
		model="\dz\gear\containers\WaterproofBag.p3d";
	};
	class ProxyBelt_Back: ProxyAttachment
	{
		scope=2;
		inventorySlot="Belt_Back";
		model="\DZ\characters\belts\knife_holster_m.p3d";
	};
	class ProxyHatchet: ProxyAttachment
	{
		scope=2;
		inventorySlot="Hatchet";
		model="\DZ\weapons\melee\blade\hatchet.p3d";
	};
	class ProxySpavnGuns1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder";
		model="\Nomad_Backpack\Nomadbackpack_v3\proxys\spavnguns1.p3d";
	};
};
class CfgSlots
{
	class Slot_belt_back
	{
		name="belt_back";
		displayName="Sheath";
		ghostIcon="knifeholster";
	};
	class Slot_GasCooker
	{
		name="GasCooker";
		displayName="Gas Cooker";
		ghostIcon="";
	};
	class Slot_Rangefinder
	{
		name="Rangefinder";
		displayName="Rangefinder";
		ghostIcon="";
	};
	class Slot_GPSReceiver
	{
		name="GPSReceiver";
		displayName="GPSReceiver";
		ghostIcon="";
	};
	class Slot_tent
	{
		name="tent";
		displayName="Tent";
		ghostIcon="set:kit_inventory image:tent";
	};
	class Slot_waterproofbag
	{
		name="waterproofbag";
		displayName="Waterproof Bag";
		ghostIcon="";
	};
	class Slot_fishingpole
	{
		name="fishingpole";
		displayName="Fishing Rod";
		ghostIcon="";
	};
	class Slot_sleepingbag
	{
		name="sleepingbag";
		displayName="sleepingbag";
		ghostIcon="";
	};
	class Slot_Hatchet
	{
		name="Hatchet";
		displayName="Hatchet";
		ghostIcon="";
	};
	class Slot_Kits_bottle
	{
		name="Kits_bottle";
		displayName="Waterbottle";
		ghostIcon="set:dayz_inventory image:canteen";
	};
};