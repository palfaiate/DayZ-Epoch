// For Chainsaw
class ItemMixOil : CA_Magazine {
	scope = 2;
	displayName = "2-Stroke Engine Oil";
	model = "\z\addons\dayz_epoch\models\oilmix.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oilmix_CA.paa";
	count = 1;
	type = "256";
	descriptionShort = "2-Stroke Engine Oil";
	sfx = "refuel";
	class ItemActions {
		class Crafting {
			text = "Mix Chainsaw Gas"; // TODO: localize
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"ItemJerryMixed",1}};
			input[] = {{"ItemMixOil",1},{"ItemJerrycan",1}};
			inputstrict = true;
		};
	};
};
class CSGAS : CA_Magazine {
	scope = 2;
	type = VSoft;
	displayName = "Gas";
	descriptionShort = "Gas for Chainsaw";
	count = 1000;
	picture = "\CA\weapons\data\equip\m_m240_ca.paa";
	ammo = "Chainsaw_Swing_Ammo";

	initSpeed = 100;
	maxLeadSpeed = 15;
	tracersEvery = 0;
	lastRoundsTracer = 0;

	optics = false;
	distanceZoomMin = 0;
	distanceZoomMax = 0;

	showEmpty = 0;
	autoReload = true;
	canLock = LockNo;

	burst = 1;
	multiplier = 1;
	ffMagnitude = 0.1;
	ffFrequency = 1;
	ffCount = 1;

	class HitEffects {
		hit_blood = "ImpactBlood";
		hit_concrete = "ImpactConcrete";
		hit_foliage = "ImpactWood";
		hit_foliage_green = "ImpactWood";
		hit_glass = "ImpactGlass";
		hit_glass_thin = "ImpactGlassThin";
		hit_metal = "ImpactMetal";
		hit_plaster = "ImpactPlaster";
		hit_rubber = "ImpactRubber";
		hit_wood = "ImpactWood";
	};
};
class ItemJerryMixed: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Mixed Gas Full";
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	descriptionShort = "20 liters of Mixed Gas.";
	sfx = "refuel";
	class ItemActions {
		class Crafting {
			text = "Fill Chainsaw";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"CSGAS",1},{"ItemJerryMixed4",1}};
			input[] = {{"ItemJerryMixed",1}};
		};
	};
};
class ItemJerryMixed4: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Mixed Gas 16L";
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	descriptionShort = "16 liters of Mixed Gas.";
	sfx = "refuel";
	class ItemActions {
		class Crafting {
			text = "Fill Chainsaw";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"CSGAS",1},{"ItemJerryMixed3",1}};
			input[] = {{"ItemJerryMixed4",1}};
		};
	};
};
class ItemJerryMixed3: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Mixed Gas 12L";
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	descriptionShort = "12 liters of Mixed Gas.";
	sfx = "refuel";
	class ItemActions {
		class Crafting {
			text = "Fill Chainsaw";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"CSGAS",1},{"ItemJerryMixed2",1}};
			input[] = {{"ItemJerryMixed3",1}};
		};
	};
};
class ItemJerryMixed2: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Mixed Gas 8L";
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	descriptionShort = "8 liters of Mixed Gas.";
	sfx = "refuel";
	class ItemActions {
		class Crafting {
			text = "Fill Chainsaw";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"CSGAS",1},{"ItemJerryMixed1",1}};
			input[] = {{"ItemJerryMixed2",1}};
		};
	};
};
class ItemJerryMixed1: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Mixed Gas 4L";
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	descriptionShort = "4 liters of Mixed Gas.";
	sfx = "refuel";
	class ItemActions {
		class Crafting {
			text = "Fill Chainsaw";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"CSGAS",1},{"ItemJerrycanEmpty",1}};
			input[] = {{"ItemJerryMixed1",1}};
		};
	};
};

// Vehicle upgrade parts
class ItemORP: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_VEHUP_ORP;
	model = "\z\addons\dayz_epoch\models\doc_Up1.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_docup1_ca.paa";
	descriptionShort = $STR_EPOCH_VEHUP_ORP_DESC;
	weight = 0.1;
	sfx = "document";
	class ItemActions {
		class Upgrades {
			text = $STR_EPOCH_PLAYER_UPGRADEV;
			script = "spawn player_upgradeVehicle;";
		};
	};
};
class ItemAVE: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_VEHUP_AVE;
	model = "\z\addons\dayz_epoch\models\doc_Up2.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_docup2_ca.paa";
	descriptionShort = $STR_EPOCH_VEHUP_AVE_DESC;
	weight = 0.1;
	sfx = "document";
	class ItemActions {
		class Upgrades {
			text = $STR_EPOCH_PLAYER_UPGRADEV;
			script = "spawn player_upgradeVehicle;";
		};
	};
};
class ItemLRK: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_VEHUP_LRK;
	model = "\z\addons\dayz_epoch\models\doc_Up3.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_docup3_ca.paa";
	descriptionShort = $STR_EPOCH_VEHUP_LRK_DESC;
	weight = 0.1;
	sfx = "document";
	class ItemActions {
		class Upgrades {
			text = $STR_EPOCH_PLAYER_UPGRADEV;
			script = "spawn player_upgradeVehicle;";
		};
	};
};
class ItemTNK: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_VEHUP_TNK;
	model = "\z\addons\dayz_epoch\models\doc_Up4.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_docup4_ca.paa";
	descriptionShort = $STR_EPOCH_VEHUP_TNK_DESC;
	weight = 0.1;
	sfx = "document";
	class ItemActions {
		class Upgrades {
			text = $STR_EPOCH_PLAYER_UPGRADEV;
			script = "spawn player_upgradeVehicle;";
		};
	};
};
class ItemARM: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_VEHUP_ARM;
	model = "\z\addons\dayz_epoch\models\doc_Up4.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_docup4_ca.paa";
	descriptionShort = $STR_EPOCH_VEHUP_ARM_DESC;
	weight = 0.1;
	sfx = "document";
	class ItemActions {
		class Upgrades {
			text = $STR_EPOCH_PLAYER_UPGRADEV;
			script = "spawn player_upgradeVehicle;";
		};
	};
};

// Documents
class ItemDocument: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Document";
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	descriptionShort = "Unknown document";
	weight = 0.1;
	sfx = "document";
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_188;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			randomOutput = 1;
			output[] = {{"ItemLetter",1},{"ItemDocumentRamp",1},{"ItemBook1",1},{"ItemBook2",1},{"ItemBook3",1},{"ItemBook4",1},{"ItemNewspaper",1},{"ItemORP",1},{"ItemAVE",1},{"ItemLRK",1},{"ItemTNK",1},{"ItemPlotDeed",1}};
			input[] = {{"ItemDocument",1}};
		};
	};
};
class ItemPlotDeed: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Plot Deed"; // TODO: localize
	model = "\z\addons\dayz_epoch\models\doc_generic.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_generic_ca.paa";
	descriptionShort = "Deed to a plot of land, similar to a plot pole."; // TODO: localize
	weight = 0.1;
	sfx = "document";
	class ItemActions {
		class Crafting {
			text = "Craft Plot Pole";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"30m_plot_kit",1}};
			input[] = {{"ItemPlotDeed",1},{"ItemGoldBar10oz",2}};
		};
	};
};
class ItemLetter: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Letter";
	model = "\z\addons\dayz_epoch\models\doc_letter.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_letter_ca.paa";
	descriptionShort = "Random letter";
	weight = 0.1;
};
class ItemBook1: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Romance Novel";
	model = "\z\addons\dayz_epoch\models\doc_trashy1.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_trashy1_ca.paa";
	descriptionShort = "Trashy Romance Novel - ""The seas are laden with lust and jealousy.""";
	weight = 0.1;
};
class ItemBook2: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Romance Novel";
	model = "\z\addons\dayz_epoch\models\doc_trashy2.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_trashy2_ca.paa";
	descriptionShort = "Trashy Romance Novel - ""He had a chest of iron, and a heart of gold.""";
	weight = 0.1;
};
class ItemBook3: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Book";
	model = "\z\addons\dayz_epoch\models\doc_child1.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_child1_ca.paa";
	descriptionShort = "Random Children's Book";
	weight = 0.1;
};
class ItemBook4: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Book";
	model = "\z\addons\dayz_epoch\models\doc_child2.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_child2_ca.paa";
	descriptionShort = "Random Children's Book";
	weight = 0.1;
};
class ItemNewspaper: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Torn Newspaper";
	model = "\z\addons\dayz_epoch\models\doc_deaths.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_deaths_ca.paa";
	descriptionShort = "Torn Newspaper - ""The recent obituaries are stil legible...""";
	weight = 0.1;
	class ItemActions {
		class Obituaries {
			text = "Read Obituaries"; // TODO: localize
			script = "spawn player_deathBoard;";

		};
	};
};
class ItemDocumentRamp: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wood Ramp";
	model = "\z\addons\dayz_epoch\models\doc_ramp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_doc_ramp_ca.paa";
	descriptionShort = "Document used in building a wooden ramp.";
	weight = 0.1;
	class ItemActions {
		class Crafting {
			text = $STR_EPOCH_PLAYER_189;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"wood_ramp_kit",1}};
			input[] = {{"ItemDocumentRamp",1},{"PartWoodLumber",8}};
		};
	};
};

class ItemHotwireKit: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Hotwire kit";
	model = "\z\addons\dayz_epoch\models\hotwire.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_hotwire_ca.paa";
	descriptionShort = "Used to temporarily unlock and start a vehicle has a chance of failure and is consumed on use.";
	weight = 2;
};