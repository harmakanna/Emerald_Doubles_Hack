CratercrestTown_SpecialShop_MapScripts::
	.byte 0

CratercrestTown_SpecialShop_Shop1::
	msgbox CratercrestTown_SpecialShop_Text_OutOfStock, MSGBOX_NPC
	end

CratercrestTown_SpecialShop_Shop2::
	msgbox CratercrestTown_SpecialShop_Text_OutOfStock, MSGBOX_NPC
	end

CratercrestTown_SpecialShop_DoYouKnowAboutGrusha::
	msgbox CratercrestTown_SpecialShop_Text_DoYouKnowAboutGrusha, MSGBOX_NPC
	end

CratercrestTown_SpecialShop_ShouldIBuy::
	msgbox CratercrestTown_SpecialShop_Text_ShouldIBuy, MSGBOX_NPC
	end

CratercrestTown_SpecialShop_Text_OutOfStock:
	.string "Welcome to Sgt. Sneasel's\n"
	.string "Old General Store!\p"
	.string "Unfortunately, we're out of\n"
	.string "stock on most of our products,\l"
	.string "but check back soon!$"

CratercrestTown_SpecialShop_Text_DoYouKnowAboutGrusha:
	.string "Did you know Grusha, one of the\n"
	.string "strongest trainers in Paldea, was\l"
	.string "once a top 10 snowboarder?\p"
	.string "He still comes to town sometimes\n"
	.string "to go down our slopes!$"

CratercrestTown_SpecialShop_Text_ShouldIBuy:
	.string "I need souvenirs for my whole\n"
	.string "family in Kalos!\p"
	.string "What do you think I should buy?$"
