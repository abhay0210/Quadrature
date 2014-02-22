//
//        Gauss_Hermite_Nodes_and_Weights_35.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 35.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_35_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_35_hpp__

void Gauss_Hermite_Nodes_and_Weights_35(long double*& nodes, long double*& weights) {
	nodes	= new long double[35];
	weights	= new long double[35];

	nodes[0] 	= 0;
	weights[0] 	= 0.37281997319072483559676258523322112019413047345302032462405091772746448408116390795549551429856533920267252704500560301897002304;

	nodes[1] 	= -0.37294171704961686114534582504947826387930811627149375933445807042536130208007317012059133481506843824357940907802850419708273012;
	weights[1] 	= 0.324728721574569459967839667789891789683536267876093137238654355292625011551991666715236609559199607929128887058146299822253932;

	nodes[2] 	= 0.37294171704961686114534582504947826387930811627149375933445807042536130208007317012059133481506843824357940907802850419708273012;
	weights[2] 	= 0.324728721574569459967839667789891789683536267876093137238654355292625011551991666715236609559199607929128887058146299822253932;

	nodes[3] 	= -0.74661763987986701711835459116023981373884373532622169105340289389015276126739964530269130158886063411868830733838055631220082243;
	weights[3] 	= 0.21434719059607348076166320084103092611087384776790595667091107313638184611024200747229980259577696607566553512145311064848542;

	nodes[4] 	= 0.74661763987986701711835459116023981373884373532622169105340289389015276126739964530269130158886063411868830733838055631220082243;
	weights[4] 	= 0.21434719059607348076166320084103092611087384776790595667091107313638184611024200747229980259577696607566553512145311064848542;

	nodes[5] 	= -1.1217809907203026167832821355551485222213344861093962970246367805215854253170893165287758531917881048750568222180277308002830274;
	weights[5] 	= 0.1068729069554625154351501326897863980461808441926495106660266633202546881445893345346038200146009758251531552427850877833585;

	nodes[6] 	= 1.1217809907203026167832821355551485222213344861093962970246367805215854253170893165287758531917881048750568222180277308002830274;
	weights[6] 	= 0.1068729069554625154351501326897863980461808441926495106660266633202546881445893345346038200146009758251531552427850877833585;

	nodes[7] 	= -1.4992244886117301684545276350108151071658535222813040480380136515106822102316013898648872530974102937937202240068564435339440502;
	weights[7] 	= 0.040024775133100286876893228823281587150889660100385804547636436985164165920901487469932130867145049239319358896211948077499;

	nodes[8] 	= 1.4992244886117301684545276350108151071658535222813040480380136515106822102316013898648872530974102937937202240068564435339440502;
	weights[8] 	= 0.040024775133100286876893228823281587150889660100385804547636436985164165920901487469932130867145049239319358896211948077499;

	nodes[9] 	= -1.8798039887309170788838233882606426256020219418907665689549717430827878086964445670779362114616387418900214381961426159669016333;
	weights[9] 	= 0.011166806590265729691008455300674807671096860146648654417871478180160315914276011792195717486434504862009489893592127379079;

	nodes[10] 	= 1.8798039887309170788838233882606426256020219418907665689549717430827878086964445670779362114616387418900214381961426159669016333;
	weights[10] 	= 0.011166806590265729691008455300674807671096860146648654417871478180160315914276011792195717486434504862009489893592127379079;

	nodes[11] 	= -2.2644675010425686494455192609002667902406911324538044554050543181975497196644095321935875909488857690296273372873320678675890512;
	weights[11] 	= 0.002295028329584094247576127885365735008863806327653173743313373446627457974236893973523851217979320967978014620550424490812;

	nodes[12] 	= 2.2644675010425686494455192609002667902406911324538044554050543181975497196644095321935875909488857690296273372873320678675890512;
	weights[12] 	= 0.002295028329584094247576127885365735008863806327653173743313373446627457974236893973523851217979320967978014620550424490812;

	nodes[13] 	= -2.6542927811971720356511563197818438229693173861275451996202108175701952782677100020266120496989716539387094898284577468332232462;
	weights[13] 	= 0.000342340093199607681519945126200534587539531758449292370363338401172771547225221709812587092084942930921831877319741660016;

	nodes[14] 	= 2.6542927811971720356511563197818438229693173861275451996202108175701952782677100020266120496989716539387094898284577468332232462;
	weights[14] 	= 0.000342340093199607681519945126200534587539531758449292370363338401172771547225221709812587092084942930921831877319741660016;

	nodes[15] 	= -3.0505384204304466908744973823434786395624372618911721580997117197599409470347937665610265728366202443996153616744591757410124283;
	weights[15] 	= 0.000036352769174157573035514185114882082269221580199436200611255828891464600431891275794327101836673226914277040160459497205;

	nodes[16] 	= 3.0505384204304466908744973823434786395624372618911721580997117197599409470347937665610265728366202443996153616744591757410124283;
	weights[16] 	= 0.000036352769174157573035514185114882082269221580199436200611255828891464600431891275794327101836673226914277040160459497205;

	nodes[17] 	= -3.4547164957519908272587071847235475744039839895663008228922630151257965398030641412415971226047048481704459604512019015511571919;
	weights[17] 	= 2.6798156546135319608881357224833869121784430674267867139826126704568116219925785572407433108739537011158618485301340525e-6;

	nodes[18] 	= 3.4547164957519908272587071847235475744039839895663008228922630151257965398030641412415971226047048481704459604512019015511571919;
	weights[18] 	= 2.6798156546135319608881357224833869121784430674267867139826126704568116219925785572407433108739537011158618485301340525e-6;

	nodes[19] 	= -3.8687007309691543826004617314557880183245906464168922563208584022218345841246547665336997435267424763639585607742962747761717731;
	weights[19] 	= 1.3269405173066729432359925262359687730646166199085549059841077837559612736479031602252638075322103018773991490644395149e-7;

	nodes[20] 	= 3.8687007309691543826004617314557880183245906464168922563208584022218345841246547665336997435267424763639585607742962747761717731;
	weights[20] 	= 1.3269405173066729432359925262359687730646166199085549059841077837559612736479031602252638075322103018773991490644395149e-7;

	nodes[21] 	= -4.2948958144927632315076450409667727574500078659297810340275428082696052018035200614054199664108260839222325111146469079782582717;
	weights[21] 	= 4.223976130009409015656411208057289459353596743390458179847087286118363785705942364374408408129680511517105190658578818e-9;

	nodes[22] 	= 4.2948958144927632315076450409667727574500078659297810340275428082696052018035200614054199664108260839222325111146469079782582717;
	weights[22] 	= 4.223976130009409015656411208057289459353596743390458179847087286118363785705942364374408408129680511517105190658578818e-9;

	nodes[23] 	= -4.7365184774132108004524740754768452509005428505750576140059375994783298737174907086289992646734449313104823958406560679748692027;
	weights[23] 	= 8.140695686677701848844802891338280114289287005496875560651796093190670328013977683097506161386397678211794091702941533e-11;

	nodes[24] 	= 4.7365184774132108004524740754768452509005428505750576140059375994783298737174907086289992646734449313104823958406560679748692027;
	weights[24] 	= 8.140695686677701848844802891338280114289287005496875560651796093190670328013977683097506161386397678211794091702941533e-11;

	nodes[25] 	= -5.198099346197752624160516241024544497894178682247232905919660227966314539318438992997458552478692312343270112126769044820056743;
	weights[25] 	= 8.722526012536957059297804798605034124167262794591858966237311468593441845956979652005054560245871621462847840645136928e-13;

	nodes[26] 	= 5.198099346197752624160516241024544497894178682247232905919660227966314539318438992997458552478692312343270112126769044820056743;
	weights[26] 	= 8.722526012536957059297804798605034124167262794591858966237311468593441845956979652005054560245871621462847840645136928e-13;

	nodes[27] 	= -5.6864689480904415916967881602321522999527916119862561315558538957414825896132594367816607755389873395315450536198185349560702852;
	weights[27] 	= 4.570444190418213325515756295996347275714305704520610473005914035340768206687867237847381946166839343662199205150903462e-15;

	nodes[28] 	= 5.6864689480904415916967881602321522999527916119862561315558538957414825896132594367816607755389873395315450536198185349560702852;
	weights[28] 	= 4.570444190418213325515756295996347275714305704520610473005914035340768206687867237847381946166839343662199205150903462e-15;

	nodes[29] 	= -6.2129737476337168733016934662777208063441283008784356383898711867577507490480518452383037509160827319942886044827051324505526356;
	weights[29] 	= 9.489884879473004649745590886336072865817132294279460039221103804890567733139171923494565037408831336261984172843803838e-18;

	nodes[30] 	= 6.2129737476337168733016934662777208063441283008784356383898711867577507490480518452383037509160827319942886044827051324505526356;
	weights[30] 	= 9.489884879473004649745590886336072865817132294279460039221103804890567733139171923494565037408831336261984172843803838e-18;

	nodes[31] 	= -6.7996094132841301572300879320318908996148428866126425711304807875829403465693417031376477936455595838557383215666112360442081162;
	weights[31] 	= 5.2456527291745084911971866313524678555750458229977619929438756280261840711030052490169569291430216769219320597144003294e-21;

	nodes[32] 	= 6.7996094132841301572300879320318908996148428866126425711304807875829403465693417031376477936455595838557383215666112360442081162;
	weights[32] 	= 5.2456527291745084911971866313524678555750458229977619929438756280261840711030052490169569291430216769219320597144003294e-21;

	nodes[33] 	= -7.5040211464489360800968445336990316742157763263872170242878228038760714906554157369824766143720334262355629655687096759301398016;
	weights[33] 	= 2.844113465725330531334563616305939878983848370607580774099399770177671432435498580582989684113891358585550773886470274937e-25;

	nodes[34] 	= 7.5040211464489360800968445336990316742157763263872170242878228038760714906554157369824766143720334262355629655687096759301398016;
	weights[34] 	= 2.844113465725330531334563616305939878983848370607580774099399770177671432435498580582989684113891358585550773886470274937e-25;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_35_hpp__)*/