//
//        Gauss_Hermite_Nodes_and_Weights_82.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 82.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_82_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_82_hpp__

void Gauss_Hermite_Nodes_and_Weights_82(long double*& nodes, long double*& weights) {
	nodes	= new long double[82];
	weights	= new long double[82];

	nodes[0] 	= -0.12228705241518350233610244562397031215448757147640495342778900588885827819828921794360159377697919383229044418622816863657259104;
	weights[0] 	= 0.2409512031980952231386425405847360322031055518396480433296251150932481251094558448648949090400894987223829359828527519843974079;

	nodes[1] 	= 0.12228705241518350233610244562397031215448757147640495342778900588885827819828921794360159377697919383229044418622816863657259104;
	weights[1] 	= 0.2409512031980952231386425405847360322031055518396480433296251150932481251094558448648949090400894987223829359828527519843974079;

	nodes[2] 	= -0.36690550971654432277578420654808183463993257476401179888675885921430478618802579672901404367411751514808568513844004177625640863;
	weights[2] 	= 0.213853598983303619986881731091625930487672179925753321782263037267790460466296598603384195349807670149566141802671056236081547;

	nodes[3] 	= 0.36690550971654432277578420654808183463993257476401179888675885921430478618802579672901404367411751514808568513844004177625640863;
	weights[3] 	= 0.213853598983303619986881731091625930487672179925753321782263037267790460466296598603384195349807670149566141802671056236081547;

	nodes[4] 	= -0.61165723388752295131300969921276048698894276798229805986120390695749928110404865499582666743088171456667187797632615756840975628;
	weights[4] 	= 0.1684288790881370497961622537442384989474778635385930986894098063137752086472999674875115241277520298826893392658711948881359;

	nodes[5] 	= 0.61165723388752295131300969921276048698894276798229805986120390695749928110404865499582666743088171456667187797632615756840975628;
	weights[5] 	= 0.1684288790881370497961622537442384989474778635385930986894098063137752086472999674875115241277520298826893392658711948881359;

	nodes[6] 	= -0.8566317705902631700947839355651875313314342423033480949171056677438974949561957456590208014119324875044292822191389437589080191;
	weights[6] 	= 0.117673485893413465593973250579145312354320037422737506566886590465782341787320349878726965530069114291189597075849268903657;

	nodes[7] 	= 0.8566317705902631700947839355651875313314342423033480949171056677438974949561957456590208014119324875044292822191389437589080191;
	weights[7] 	= 0.117673485893413465593973250579145312354320037422737506566886590465782341787320349878726965530069114291189597075849268903657;

	nodes[8] 	= -1.1019197273183626617578103643311936645776069003754471344907912022696951473374059383244520871079455762279610469453667007319263779;
	weights[8] 	= 0.07289127392474105171499688890813818371531510244048905723908721025395902452131462611998414754897690222628885325923412347704;

	nodes[9] 	= 1.1019197273183626617578103643311936645776069003754471344907912022696951473374059383244520871079455762279610469453667007319263779;
	weights[9] 	= 0.07289127392474105171499688890813818371531510244048905723908721025395902452131462611998414754897690222628885325923412347704;

	nodes[10] 	= -1.3476132188376881358133108385075217494923001158002065762733685734178582545491279489236055461790543433636503741171551110722766169;
	weights[10] 	= 0.0400038267230072289356254589390894203785749941689626732115087917816522438193155831969158701525560168183349803390097555874;

	nodes[11] 	= 1.3476132188376881358133108385075217494923001158002065762733685734178582545491279489236055461790543433636503741171551110722766169;
	weights[11] 	= 0.0400038267230072289356254589390894203785749941689626732115087917816522438193155831969158701525560168183349803390097555874;

	nodes[12] 	= -1.5938063340319311643990454326401371408299613143841848606413257840846595303229690838293008304460679429058185897697402953682496828;
	weights[12] 	= 0.019434337138642232044357403107289986795592823999904845156771945291055333553839085419362693487513729023029739899504988013;

	nodes[13] 	= 1.5938063340319311643990454326401371408299613143841848606413257840846595303229690838293008304460679429058185897697402953682496828;
	weights[13] 	= 0.019434337138642232044357403107289986795592823999904845156771945291055333553839085419362693487513729023029739899504988013;

	nodes[14] 	= -1.8405956313004481760730048001555285820955994055402101457202800008681997989672698661900428500586236279909416828701780205228986713;
	weights[14] 	= 0.00834850909644662234112595725300667933742464430278840039414027325968932584602177509068376373481592415925453978650996887;

	nodes[15] 	= 1.8405956313004481760730048001555285820955994055402101457202800008681997989672698661900428500586236279909416828701780205228986713;
	weights[15] 	= 0.00834850909644662234112595725300667933742464430278840039414027325968932584602177509068376373481592415925453978650996887;

	nodes[16] 	= -2.0880806704972801743393370936171409138362063647431997872459239510781459425416962958500393927078321356298779597865799757873380392;
	weights[16] 	= 0.0031670839271362599722564671573397317027538073420199755431823475159620443250032431845192620637610587967120190871387515;

	nodes[17] 	= 2.0880806704972801743393370936171409138362063647431997872459239510781459425416962958500393927078321356298779597865799757873380392;
	weights[17] 	= 0.0031670839271362599722564671573397317027538073420199755431823475159620443250032431845192620637610587967120190871387515;

	nodes[18] 	= -2.3363645905095151424699646627357762760250185996981905746325269016724206469903223428343652143844403526954634458948030279334192937;
	weights[18] 	= 0.0010594217898549953573610497764593498416859751342244719452293031980076097711305195588022979100824686140723301127296131;

	nodes[19] 	= 2.3363645905095151424699646627357762760250185996981905746325269016724206469903223428343652143844403526954634458948030279334192937;
	weights[19] 	= 0.0010594217898549953573610497764593498416859751342244719452293031980076097711305195588022979100824686140723301127296131;

	nodes[20] 	= -2.5855547430080742473785946024619235334282340867634757681435832987467263810343339826693481557842407472369975157654023823338669609;
	weights[20] 	= 0.0003119500328225069958741248452138276640172447793305594828388414098315408414826666132131748885198336873712183338313797;

	nodes[21] 	= 2.5855547430080742473785946024619235334282340867634757681435832987467263810343339826693481557842407472369975157654023823338669609;
	weights[21] 	= 0.0003119500328225069958741248452138276640172447793305594828388414098315408414826666132131748885198336873712183338313797;

	nodes[22] 	= -2.8357633947424322042217148274766902994695031367606399671970794364286994580328041858808696248082436117373356051392692589337387645;
	weights[22] 	= 0.000080695629747031204745805711763864270411379992732099537244544081759390613872689083774895461275923902335234459030021;

	nodes[23] 	= 2.8357633947424322042217148274766902994695031367606399671970794364286994580328041858808696248082436117373356051392692589337387645;
	weights[23] 	= 0.000080695629747031204745805711763864270411379992732099537244544081759390613872689083774895461275923902335234459030021;

	nodes[24] 	= -3.0871085130972604599110503229647382966193228039104289162339895002585919654638994645060543945981513055985009468576001908382908887;
	weights[24] 	= 0.0000182974905313239979090301416628055561093756987309432208072238125430218823246766941287284904426316656734456506343526;

	nodes[25] 	= 3.0871085130972604599110503229647382966193228039104289162339895002585919654638994645060543945981513055985009468576001908382908887;
	weights[25] 	= 0.0000182974905313239979090301416628055561093756987309432208072238125430218823246766941287284904426316656734456506343526;

	nodes[26] 	= -3.3397146526239908755891365096407278813996349959343319952945616334032877592446123963378336801140773902566640443820095534760896591;
	weights[26] 	= 3.6275480887435925626464141050677049409762656518826089847470998998952771017171917531315829534821792769436087556272e-6;

	nodes[27] 	= 3.3397146526239908755891365096407278813996349959343319952945616334032877592446123963378336801140773902566640443820095534760896591;
	weights[27] 	= 3.6275480887435925626464141050677049409762656518826089847470998998952771017171917531315829534821792769436087556272e-6;

	nodes[28] 	= -3.593713964093433493830541758918679775094749067137569359847088712155410912186412645697808836910231890661603542095160658777728561;
	weights[28] 	= 6.270222683682886864493845792744017398218330370905733376300664187348867041713607547423877135864494130581259375408e-7;

	nodes[29] 	= 3.593713964093433493830541758918679775094749067137569359847088712155410912186412645697808836910231890661603542095160658777728561;
	weights[29] 	= 6.270222683682886864493845792744017398218330370905733376300664187348867041713607547423877135864494130581259375408e-7;

	nodes[30] 	= -3.8492473525444274251791098682248116712048671807897532414884036184412438938067804581002398062752395028522070973162765431591640503;
	weights[30] 	= 9.41932450019690790959746661472352913754253009828617982690836701419859616344796377704915311141533309158980761866e-8;

	nodes[31] 	= 3.8492473525444274251791098682248116712048671807897532414884036184412438938067804581002398062752395028522070973162765431591640503;
	weights[31] 	= 9.41932450019690790959746661472352913754253009828617982690836701419859616344796377704915311141533309158980761866e-8;

	nodes[32] 	= -4.1064658171809418151978653550277477385541245692949133790597287573056198124566383347112494376729499252519790778054944445503353107;
	weights[32] 	= 1.22539830471113735417020620265699555039678816009864253727254534233742107222626512085203724707837457519574409139e-8;

	nodes[33] 	= 4.1064658171809418151978653550277477385541245692949133790597287573056198124566383347112494376729499252519790778054944445503353107;
	weights[33] 	= 1.22539830471113735417020620265699555039678816009864253727254534233742107222626512085203724707837457519574409139e-8;

	nodes[34] 	= -4.3655320142842480078325012048135491819590834470913961956967146678753201151561924935801601062845555031380148903168173497267747666;
	weights[34] 	= 1.3750709116496795753772318029148179662022839165970133120822913570105444530859188493708973312678984160398970744e-9;

	nodes[35] 	= 4.3655320142842480078325012048135491819590834470913961956967146678753201151561924935801601062845555031380148903168173497267747666;
	weights[35] 	= 1.3750709116496795753772318029148179662022839165970133120822913570105444530859188493708973312678984160398970744e-9;

	nodes[36] 	= -4.6266220952405259599760653453230389140850262564884108458020398456033803888072738899860127540031584560330216758202142992794716156;
	weights[36] 	= 1.3250311215425483882958266465326112319766008695503793905892738705010699979113178352998729353678987336144776972e-10;

	nodes[37] 	= 4.6266220952405259599760653453230389140850262564884108458020398456033803888072738899860127540031584560330216758202142992794716156;
	weights[37] 	= 1.3250311215425483882958266465326112319766008695503793905892738705010699979113178352998729353678987336144776972e-10;

	nodes[38] 	= -4.889927886304115214931704837600881124127469997734035674453850581488981398312274033297955843662550630409793867640748838637813161;
	weights[38] 	= 1.090961318304476570205052328564453823756141672543354242082204288327973753006902232912240878829468334137148645e-11;

	nodes[39] 	= 4.889927886304115214931704837600881124127469997734035674453850581488981398312274033297955843662550630409793867640748838637813161;
	weights[39] 	= 1.090961318304476570205052328564453823756141672543354242082204288327973753006902232912240878829468334137148645e-11;

	nodes[40] 	= -5.1556594962091574334886908476582062784100844999698073028591406692268980768269189057370804973320139783456680638708583619836914929;
	weights[40] 	= 7.63199025102107315883855220363152401480852805724499103150913125806656024990348974420165238092785801541714621e-13;

	nodes[41] 	= 5.1556594962091574334886908476582062784100844999698073028591406692268980768269189057370804973320139783456680638708583619836914929;
	weights[41] 	= 7.63199025102107315883855220363152401480852805724499103150913125806656024990348974420165238092785801541714621e-13;

	nodes[42] 	= -5.424048464225716879019292780624349109585431334201347110701600027110002014969714944789479689898156127689493012932886102207422011;
	weights[42] 	= 4.50784247187565999431570489831365606154075424177005661976242489306416384587015203265587188712980860403941686e-14;

	nodes[43] 	= 5.424048464225716879019292780624349109585431334201347110701600027110002014969714944789479689898156127689493012932886102207422011;
	weights[43] 	= 4.50784247187565999431570489831365606154075424177005661976242489306416384587015203265587188712980860403941686e-14;

	nodes[44] 	= -5.6953515977146449296410017653953078584578300216967581583852729225880923581467966558450796974333446149535648413093255078235940696;
	weights[44] 	= 2.23205938373381254201080739795983353832267972604471225699761388029954908548795591914839013582011983739858121e-15;

	nodes[45] 	= 5.6953515977146449296410017653953078584578300216967581583852729225880923581467966558450796974333446149535648413093255078235940696;
	weights[45] 	= 2.23205938373381254201080739795983353832267972604471225699761388029954908548795591914839013582011983739858121e-15;

	nodes[46] 	= -5.9698556991575893519856477974529825408319694062796153654938453209553411525134506605317189740261717751430173400292870687012613592;
	weights[46] 	= 9.1905096520185681639476793363259408326825792582766709868354168044078626883821543516361583415411391190615575e-17;

	nodes[47] 	= 5.9698556991575893519856477974529825408319694062796153654938453209553411525134506605317189740261717751430173400292870687012613592;
	weights[47] 	= 9.1905096520185681639476793363259408326825792582766709868354168044078626883821543516361583415411391190615575e-17;

	nodes[48] 	= -6.2478834549069708058239465764807045228275786103964766286400208380811118614100951492677598977448395225855246480218584850952270124;
	weights[48] 	= 3.1179884254074802018638797582571340779616462090233690122662528173215353812444993371012595303670169829761316e-18;

	nodes[49] 	= 6.2478834549069708058239465764807045228275786103964766286400208380811118614100951492677598977448395225855246480218584850952270124;
	weights[49] 	= 3.1179884254074802018638797582571340779616462090233690122662528173215353812444993371012595303670169829761316e-18;

	nodes[50] 	= -6.5298008622888708413215356181345912154901390724727976171424671930288473690735902759927312080592049358987440626537710151596212308;
	weights[50] 	= 8.6245303609380125811985806495247830759455624209299478172121030111113949993645714338233601532343583444082872e-20;

	nodes[51] 	= 6.5298008622888708413215356181345912154901390724727976171424671930288473690735902759927312080592049358987440626537710151596212308;
	weights[51] 	= 8.6245303609380125811985806495247830759455624209299478172121030111113949993645714338233601532343583444082872e-20;

	nodes[52] 	= -6.816026725456638119480683923084451456418217293622525096784286463428067704268025025887459160096629452015406142663314193920378352;
	weights[52] 	= 1.921543143288918972884614590181435137295612994868167299083595175379389642235077232199334066992333452789799e-21;

	nodes[53] 	= 6.816026725456638119480683923084451456418217293622525096784286463428067704268025025887459160096629452015406142663314193920378352;
	weights[53] 	= 1.921543143288918972884614590181435137295612994868167299083595175379389642235077232199334066992333452789799e-21;

	nodes[54] 	= -7.1070449818933451841179228661979584831080136244126779019726485547797629844721945762859372198741459947468551125240593695351819752;
	weights[54] 	= 3.4001352768446834029786942812062134991814519912459395067070553299683002870405308359471714018162977437065521e-23;

	nodes[55] 	= 7.1070449818933451841179228661979584831080136244126779019726485547797629844721945762859372198741459947468551125240593695351819752;
	weights[55] 	= 3.4001352768446834029786942812062134991814519912459395067070553299683002870405308359471714018162977437065521e-23;

	nodes[56] 	= -7.4034209786511358460408450221150036254531132775411423880946483464300348533059963953550724947254376567245865977679299718925663462;
	weights[56] 	= 4.7000291498915054252764991014262558495576654666375727047858823231054460052189322634265923194019672958829835e-25;

	nodes[57] 	= 7.4034209786511358460408450221150036254531132775411423880946483464300348533059963953550724947254376567245865977679299718925663462;
	weights[57] 	= 4.7000291498915054252764991014262558495576654666375727047858823231054460052189322634265923194019672958829835e-25;

	nodes[58] 	= -7.7058233840379786104907354938618232371086446809134124901454658301073289250401843522796812824571025385990480163286884073628810177;
	weights[58] 	= 4.9770348134757439165588221119146420076827809060262988060534183181288574284733421424559248095736062980144308e-27;

	nodes[59] 	= 7.7058233840379786104907354938618232371086446809134124901454658301073289250401843522796812824571025385990480163286884073628810177;
	weights[59] 	= 4.9770348134757439165588221119146420076827809060262988060534183181288574284733421424559248095736062980144308e-27;

	nodes[60] 	= -8.0150543482026932017557553629825898870910237464771762801154628851668959969316465021071375943180135558046657052699852807026714425;
	weights[60] 	= 3.9439087540837725057078739147468975989667339939317618597909431766593636463345049188829518493318379450768805e-29;

	nodes[61] 	= 8.0150543482026932017557553629825898870910237464771762801154628851668959969316465021071375943180135558046657052699852807026714425;
	weights[61] 	= 3.9439087540837725057078739147468975989667339939317618597909431766593636463345049188829518493318379450768805e-29;

	nodes[62] 	= -8.3320921014281225746559708674656821046996002502238481347655267899456955355406157112259531323423028618160048172055706035485364602;
	weights[62] 	= 2.2729303616459208838679231054991133786822889684939853675230181526858544892436533378151658848971063310909142e-31;

	nodes[63] 	= 8.3320921014281225746559708674656821046996002502238481347655267899456955355406157112259531323423028618160048172055706035485364602;
	weights[63] 	= 2.2729303616459208838679231054991133786822889684939853675230181526858544892436533378151658848971063310909142e-31;

	nodes[64] 	= -8.6581529699601745749139920263609740669122637489201656388062035526908224624556613029141206351462058484864640843975077787728878531;
	weights[64] 	= 9.1963660505689214836369930090102610447008779107126004305531175746156442091496874566685044439700686132121116e-34;

	nodes[65] 	= 8.6581529699601745749139920263609740669122637489201656388062035526908224624556613029141206351462058484864640843975077787728878531;
	weights[65] 	= 9.1963660505689214836369930090102610447008779107126004305531175746156442091496874566685044439700686132121116e-34;

	nodes[66] 	= -8.9947849881314202878214085521578165289458215353841482561090583771370651394610452315959375563848635004028540525768016160243355651;
	weights[66] 	= 2.49814761148042486165456531840126689312301560585090134083360026515158246642618087421756282381084759269958827e-36;

	nodes[67] 	= 8.9947849881314202878214085521578165289458215353841482561090583771370651394610452315959375563848635004028540525768016160243355651;
	weights[67] 	= 2.49814761148042486165456531840126689312301560585090134083360026515158246642618087421756282381084759269958827e-36;

	nodes[68] 	= -9.344015570749052165978965249949973895874395706697999987597149358379706808481142056850965083125464470582613667757127138411657982;
	weights[68] 	= 4.29909710756091351881370188432607298632352515101822763743952349767850304623646949998660550097959568302874847e-39;

	nodes[69] 	= 9.344015570749052165978965249949973895874395706697999987597149358379706808481142056850965083125464470582613667757127138411657982;
	weights[69] 	= 4.29909710756091351881370188432607298632352515101822763743952349767850304623646949998660550097959568302874847e-39;

	nodes[70] 	= -9.7085976169732788378091528260849331845865344435971927475917816495507235757381869634901642120028374721441924870200324748051165805;
	weights[70] 	= 4.33487612336982142204539117960059872204224761367904035618276539052555127336051842608519320932595483454506159e-42;

	nodes[71] 	= 9.7085976169732788378091528260849331845865344435971927475917816495507235757381869634901642120028374721441924870200324748051165805;
	weights[71] 	= 4.33487612336982142204539117960059872204224761367904035618276539052555127336051842608519320932595483454506159e-42;

	nodes[72] 	= -10.092449631556645826116566227794752643099487415754298769992925850899268473873507268807364748507378345769396472548578631969340326;
	weights[72] 	= 2.294487143412068299971938215605235387136848283551060871557551141322609872129209536122613180809348343355391562e-45;

	nodes[73] 	= 10.092449631556645826116566227794752643099487415754298769992925850899268473873507268807364748507378345769396472548578631969340326;
	weights[73] 	= 2.294487143412068299971938215605235387136848283551060871557551141322609872129209536122613180809348343355391562e-45;

	nodes[74] 	= -10.501520679503271181015975696752141731968733469758570876307812408658196406475875647999134464078733735083549664032010599546041085;
	weights[74] 	= 5.4079341607685958099436216675943827218740633329257205461347645850084601709403696666346102705040706201137081932e-49;

	nodes[75] 	= 10.501520679503271181015975696752141731968733469758570876307812408658196406475875647999134464078733735083549664032010599546041085;
	weights[75] 	= 5.4079341607685958099436216675943827218740633329257205461347645850084601709403696666346102705040706201137081932e-49;

	nodes[76] 	= -10.945733348554122719662643351454716793621021882588819482930970202760597070343309678778839841075850865750673432804283085270843631;
	weights[76] 	= 4.33316281566699248805822134459313164020632611250032330942288537570126317024734574691940841624813853383894622827e-53;

	nodes[77] 	= 10.945733348554122719662643351454716793621021882588819482930970202760597070343309678778839841075850865750673432804283085270843631;
	weights[77] 	= 4.33316281566699248805822134459313164020632611250032330942288537570126317024734574691940841624813853383894622827e-53;

	nodes[78] 	= -11.444355851257513668461008306611204860881533276569199839114261942290685945620969034873868186516681584183306503442363214094204874;
	weights[78] 	= 7.06830406546372604250928001138005735527081687859358457860433178245037458883637350800429701531983151049441358866e-58;

	nodes[79] 	= 11.444355851257513668461008306611204860881533276569199839114261942290685945620969034873868186516681584183306503442363214094204874;
	weights[79] 	= 7.06830406546372604250928001138005735527081687859358457860433178245037458883637350800429701531983151049441358866e-58;

	nodes[80] 	= -12.047870349469453028218267124484187033823179290579809579222001992275940338007393139331919749486998619521237994213614227512284291;
	weights[80] 	= 6.3900846179357112910978780345395666536056075722713663529300435522438731810544499362794446722050093460432455278817e-64;

	nodes[81] 	= 12.047870349469453028218267124484187033823179290579809579222001992275940338007393139331919749486998619521237994213614227512284291;
	weights[81] 	= 6.3900846179357112910978780345395666536056075722713663529300435522438731810544499362794446722050093460432455278817e-64;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_82_hpp__)*/