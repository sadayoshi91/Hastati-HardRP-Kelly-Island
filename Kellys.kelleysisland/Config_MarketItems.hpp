/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*/
class MarketItems {
    //Virtual Items
	
    class oil_processed {
		startPrice = 200;
		maxPrice = 450;		//weight = 7;
		minPrice = 90;
		consumption = 40;
		maxQuantity = 2000;
    };

    class copper_refined {
		startPrice = 200;
		maxPrice = 550;		//weight = 3;
		minPrice = 110;
		consumption = 50;
		maxQuantity = 2500;
    };

    class iron_refined {
		startPrice = 200;
		maxPrice = 650; 		//weight = 3;
		minPrice = 130;
		consumption = 50;
		maxQuantity = 2500;
    };

    class salt_refined {
		startPrice = 200;
		maxPrice = 350;		//weight = 1;
		minPrice = 70;
		consumption = 60;
		maxQuantity = 3000;
    };

    class diamond_cut {
		startPrice = 200;
		maxPrice = 3500;		//weight = 2;
		minPrice = 700;
		consumption = 20;
		maxQuantity = 1000;
    };

    class cement {
		startPrice = 200;
		maxPrice = 480;		//weight = 5;
		minPrice = 96;
		consumption = 40;
		maxQuantity = 2000;
    };

    class heroin_processed {
		startPrice = 200;
		maxPrice = 3500;		//weight = 4;
		minPrice = 700;	
		consumption = 10;
		maxQuantity = 500;
    };
	
    class marijuana {
		startPrice = 200;
		maxPrice = 800;		//weight = 3;
		minPrice = 160;
		consumption = 18;
		maxQuantity = 900;
    };

    class cocaine_processed {
		startPrice = 200;
		maxPrice = 7000; 		//weight = 4;
		minPrice = 1400;
		consumption = 10;
		maxQuantity = 500;
    };

    class glass {
		startPrice = 200;
		maxPrice = 350;	  		//weight = 1;
		minPrice = 70;
		consumption = 40;
		maxQuantity = 2000;
        icon = "";
    };
	
	
	
	
	
	
	
    //Mined Items
    class oil_unprocessed {
		startPrice = 200;
		maxPrice = 225;		//weight = 7;
		minPrice = 45;
		consumption = 40;
		maxQuantity = 2000;
    };

    class copper_unrefined {
		startPrice = 200;
		maxPrice = 275;		//weight = 4;
		minPrice = 55;
		consumption = 50;
		maxQuantity = 2500;
    };

    class iron_unrefined {
		startPrice = 200;
		maxPrice = 325;		//weight = 5;
		minPrice = 65;
		consumption = 50;
		maxQuantity = 2500;
    };

    class salt_unrefined {
		startPrice = 200;
		maxPrice = 175;		//weight = 3;
		minPrice = 35;
		consumption = 60;
		maxQuantity = 3000;
    };

    class sand {
		startPrice = 200;
		maxPrice = 175;		//weight = 3;
		minPrice = 35;
		consumption = 40;
		maxQuantity = 2000;
    };

    class diamond_uncut {
		startPrice = 200;
		maxPrice = 1750;		//weight = 4;
		minPrice = 350;
		consumption = 20;
		maxQuantity = 1000;
    };

    class rock {
		startPrice = 200;
		maxPrice = 240;		//weight = 6;
		minPrice = 48;
		consumption = 40;
		maxQuantity = 2000;
        icon = "";
    };

    //Drugs
    class heroin_unprocessed {
		startPrice = 200;
		maxPrice = 1750; 		//weight = 6;
		minPrice = 875;
		consumption = 10;
		maxQuantity = 500;
    };

    class cannabis {
		startPrice = 200;
		maxPrice = 400; 		//weight = 4;
		minPrice = 200;
		consumption = 18;
		maxQuantity = 900;
    };

	
    class cocaine_unprocessed {
		startPrice = 200;
		maxPrice = 3500;	 		//weight = 6;
		minPrice = 700;
		consumption = 10;
		maxQuantity = 500;
    };


};
