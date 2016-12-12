/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };
	
    class don1 {
        name = "Donatorka";
        side = "civ";
        license = "don1";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_AKS_F", "", 40000, -1 },
			{ "SMG_01_F", "", 40000, -1 },
			{ "SMG_02_F", "", 32000, -1 },
			{ "SMG_05_F", "", 32000, -1 },
			{ "arifle_SDAR_F", "", 40000, -1 },
            { "arifle_TRG20_F", "", 64000, -1 },
			{ "arifle_TRG21_F", "", 80000, -1 },
            { "arifle_Mk20_F", "", 80000, -1 },
			{ "arifle_Mk20C_F", "", 64000, -1 },
			{ "arifle_MXM_F", "", 144000, -1 },
			{ "arifle_MXM_Black_F", "", 144000, -1 },
			{ "arifle_MXM_khk_F", "", 144000, -1 },
			{ "srifle_DMR_07_blk_F", "", 144000, -1 },
			{ "srifle_DMR_07_hex_F", "", 144000, -1 },
			{ "srifle_DMR_07_ghex_F", "", 144000, -1 },
			{ "srifle_DMR_01_F", "", 200000, -1 },
			{ "srifle_EBR_F", "", 240000, -1 }, 
			{ "arifle_SPAR_03_blk_F", "", 240000, -1 }, 
			{ "arifle_SPAR_03_khk_F", "", 240000, -1 }, 
			{ "arifle_SPAR_03_snd_F", "", 240000, -1 },
			{ "srifle_DMR_03_F", "", 240000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 240000, -1 },
			{ "srifle_DMR_03_tan_F", "", 240000, -1 },
			{ "srifle_DMR_03_multicam_F", "", 240000, -1 },
			{ "srifle_DMR_03_woodland_F", "", 240000, -1 },
			{ "arifle_Katiba_C_F", "", 160000, -1 },
			{ "arifle_SPAR_01_blk_F", "", 120000, -1 },
			{ "arifle_SPAR_01_khk_F", "", 120000, -1 },
			{ "arifle_SPAR_01_snd_F", "", 120000, -1 },
			{ "arifle_CTAR_blk_F", "", 144000, -1 },
			{ "arifle_CTAR_hex_F", "", 144000, -1 },
			{ "arifle_CTAR_ghex_F", "", 144000, -1 },
			{ "arifle_Katiba_F", "", 184000, -1 },
			{ "arifle_ARX_blk_F", "", 184000, -1 },
			{ "arifle_ARX_ghex_F", "", 184000, -1 },
			{ "arifle_ARX_hex_F", "", 184000, -1 },		
			{ "arifle_AKM_F", "", 216000, -1 }, 
			{ "arifle_SPAR_02_blk_F", "", 144000, -1 },
			{ "arifle_SPAR_02_khk_F", "", 144000, -1 },
			{ "arifle_SPAR_02_snd_F", "", 144000, -1 },
			{ "arifle_CTARS_blk_F", "", 168000, -1 },
			{ "arifle_CTARS_hex_F", "", 168000, -1 },
			{ "arifle_CTARS_ghex_F", "", 168000, -1 },
			{ "LMG_03_F", "", 160000, -1 },
			{ "arifle_MX_SW_F", "", 200000, -1 },
			{ "LMG_Mk200_F", "", 224000, -1 },
			
			
			{ "Binocular", "", 320, -1 },
            { "ItemGPS", "", 160, -1 },
            { "ItemMap", "", 80, -1 },
            { "ItemCompass", "", 80, -1 },
            { "ItemWatch", "", 80, -1 },
            { "FirstAidKit", "", 320, -1 },
            { "NVGoggles", "", 8000, -1 },
            { "Chemlight_red", "", 800, -1 },
            { "Chemlight_yellow", "", 800, -1 },
            { "Chemlight_green", "", 800, -1 },
            { "Chemlight_blue", "", 800, -1 },
			{ "SmokeShell", "", 1600, -1 }
        };
        mags[] = {
            { "30Rnd_545x39_Mag_F", "", 1600 },
            { "20Rnd_556x45_UW_mag", "", 1600 },
            { "30Rnd_9x21_Mag_SMG_02", "", 1600 },
            { "30Rnd_9x21_Mag", "", 1600 },
            { "30Rnd_556x45_Stanag", "", 2000 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 3200 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 3200 },
			{ "10Rnd_762x54_Mag", "", 2400 },
			{ "20Rnd_762x51_Mag", "", 4800 },
            { "30Rnd_580x42_Mag_Tracer_F", "", 2400 },
			{ "30Rnd_762x39_Mag_F", "", 2400 },
            { "150Rnd_556x45_Drum_Mag_Tracer_F", "", 5600 },
            { "100Rnd_580x42_Mag_Tracer_F", "", 5600 },
			{ "200Rnd_556x45_Box_Tracer_F", "", 5600 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 5600 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 8000 }
        };
		accs[] = {
			{ "optic_Aco", "", 2000, -1 },
			{ "optic_Aco_smg", "", 2000, -1 },
			{ "optic_Holosight", "", 8000, -1 },
			{ "optic_MRCO", "", 12000, -1 },
			{ "optic_Arco", "", 24000, -1 },
			{ "optic_ERCO_blk_F", "", 24000, -1 },
			{ "optic_Hamr", "", 24000, -1 },
			{ "optic_DMS", "", 80000, -1 },
			{ "optic_MRCO", "", 28000, -1 },
			
			{ "bipod_02_F_blk", "", 12000, -1 },
			{ "acc_pointer_IR", "", 6400, -1 },
			{ "acc_flashlight", "", 800, -1 }
        };
    };
	
    class don2 {
        name = "Donatorka II";
        side = "civ";
        license = "don2";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_AKS_F", "", 35000, -1 },
			{ "SMG_01_F", "", 35000, -1 },
			{ "SMG_02_F", "", 28000, -1 },
			{ "SMG_05_F", "", 28000, -1 },
			{ "arifle_SDAR_F", "", 35000, -1 },
            { "arifle_TRG20_F", "", 56000, -1 },
			{ "arifle_TRG21_F", "", 70000, -1 },
            { "arifle_Mk20_F", "", 70000, -1 },
			{ "arifle_Mk20C_F", "", 56000, -1 },
			{ "arifle_MXM_F", "", 126000, -1 },
			{ "arifle_MXM_Black_F", "", 126000, -1 },
			{ "arifle_MXM_khk_F", "", 126000, -1 },
			{ "srifle_DMR_07_blk_F", "", 126000, -1 },
			{ "srifle_DMR_07_hex_F", "", 126000, -1 },
			{ "srifle_DMR_07_ghex_F", "", 126000, -1 },
			{ "srifle_DMR_01_F", "", 175000, -1 },
			{ "srifle_EBR_F", "", 210000, -1 }, 
			{ "arifle_SPAR_03_blk_F", "", 210000, -1 }, 
			{ "arifle_SPAR_03_khk_F", "", 210000, -1 }, 
			{ "arifle_SPAR_03_snd_F", "", 210000, -1 },
			{ "srifle_DMR_03_F", "", 210000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 210000, -1 },
			{ "srifle_DMR_03_tan_F", "", 210000, -1 },
			{ "srifle_DMR_03_multicam_F", "", 210000, -1 },
			{ "srifle_DMR_03_woodland_F", "", 210000, -1 },
			{ "srifle_DMR_02_F", "", 420000, -1 },
			{ "srifle_DMR_02_camo_F", "", 420000, -1 }, 
			{ "srifle_DMR_02_sniper_F", "", 420000, -1 },		
			{ "arifle_Katiba_C_F", "", 140000, -1 },
			{ "arifle_SPAR_01_blk_F", "", 105000, -1 },
			{ "arifle_SPAR_01_khk_F", "", 105000, -1 },
			{ "arifle_SPAR_01_snd_F", "", 105000, -1 },
			{ "arifle_CTAR_blk_F", "", 126000, -1 },
			{ "arifle_CTAR_hex_F", "", 126000, -1 },
			{ "arifle_CTAR_ghex_F", "", 126000, -1 },
			{ "arifle_Katiba_F", "", 161000, -1 },
			{ "arifle_ARX_blk_F", "", 161000, -1 },
			{ "arifle_ARX_ghex_F", "", 161000, -1 },
			{ "arifle_ARX_hex_F", "", 161000, -1 },		
			{ "arifle_AKM_F", "", 189000, -1 },
			{ "arifle_AK12_F", "", 210000, -1 }, 
			{ "arifle_MX_F", "", 175000, -1 }, 
			{ "arifle_SPAR_02_blk_F", "", 126000, -1 },
			{ "arifle_SPAR_02_khk_F", "", 126000, -1 },
			{ "arifle_SPAR_02_snd_F", "", 126000, -1 },
			{ "arifle_CTARS_blk_F", "", 210000, -1 },
			{ "arifle_CTARS_hex_F", "", 210000, -1 },
			{ "arifle_CTARS_ghex_F", "", 210000, -1 },
			{ "LMG_03_F", "", 140000, -1 },
			{ "arifle_MX_SW_F", "", 175000, -1 },
			{ "LMG_Mk200_F", "", 196000, -1 }, 
			{ "LMG_Zafir_F", "", 245000, -1 }, 
            { "launch_RPG7_F", "", 210000, -1 },	
			
			
			{ "Binocular", "", 280, -1 },
            { "ItemGPS", "", 140, -1 },
            { "ItemMap", "", 70, -1 },
            { "ItemCompass", "", 70, -1 },
            { "ItemWatch", "", 70, -1 },
            { "FirstAidKit", "", 280, -1 },
            { "NVGoggles", "", 7000, -1 },
            { "Chemlight_red", "", 700, -1 },
            { "Chemlight_yellow", "", 700, -1 },
            { "Chemlight_green", "", 700, -1 },
            { "Chemlight_blue", "", 700, -1 },
			{ "SmokeShell", "", 1400, -1 }
        };
        mags[] = {
            { "30Rnd_545x39_Mag_F", "", 1400 },
            { "20Rnd_556x45_UW_mag", "", 1400 },
            { "30Rnd_9x21_Mag_SMG_02", "", 1400 },
            { "30Rnd_9x21_Mag", "", 1400 },
            { "30Rnd_556x45_Stanag", "", 1750 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 2800 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 2800 },
			{ "10Rnd_762x54_Mag", "", 2100 },
			{ "20Rnd_762x51_Mag", "", 4200 },
			{ "10Rnd_338_Mag", "", 4900 },
            { "30Rnd_580x42_Mag_Tracer_F", "", 2100 },
			{ "30Rnd_762x39_Mag_F", "", 2100 },
			{ "30Rnd_762x39_Mag_Tracer_Green_F", "", 3500 },
            { "150Rnd_556x45_Drum_Mag_Tracer_F", "", 4900 },
            { "100Rnd_580x42_Mag_Tracer_F", "", 4900 },
			{ "200Rnd_556x45_Box_Tracer_F", "", 4900 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 4900 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 4900 },
			{ "150Rnd_762x54_Box_Tracer", "", 4900 },
			{ "RPG7_F", "", 210000 }			
        };
		accs[] = {
			{ "optic_Aco", "", 1750, -1 },
			{ "optic_Aco_smg", "", 1750, -1 },
			{ "optic_Holosight", "", 4900, -1 },
			{ "optic_MRCO", "", 10500, -1 },
			{ "optic_Arco", "", 21000, -1 },
			{ "optic_ERCO_blk_F", "", 21000, -1 },
			{ "optic_Hamr", "", 21000, -1 },
			{ "optic_DMS", "", 42000, -1 },
			{ "optic_KHS_old", "", 70000, -1 },
			{ "optic_KHS_blk", "", 150000, -1 },
			
			{ "bipod_02_F_blk", "", 10500, -1 },
			{ "acc_pointer_IR", "", 4900, -1 },
			{ "acc_flashlight", "", 700, -1 }
        };
    };
	
    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "hgun_P07_F", "", 7500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "arifle_MX_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
