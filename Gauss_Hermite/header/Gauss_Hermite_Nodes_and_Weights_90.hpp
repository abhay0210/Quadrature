//
//        Gauss_Hermite_Nodes_and_Weights_90.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 90.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_90_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_90_hpp__

void Gauss_Hermite_Nodes_and_Weights_90(long double*& nodes, long double*& weights) {
	nodes	= new long double[90];
	weights	= new long double[90];

	nodes[0] 	= -0.11675694609164176880935078914680988552741024257991886083581707578724871349689876546215041123941868761697838075322208566789146516;
	weights[0] 	= 0.2303579701819450360445343292342979496503564028295724847960187005615069187121267091353097115250370353069595437838763582388183237;

	nodes[1] 	= 0.11675694609164176880935078914680988552741024257991886083581707578724871349689876546215041123941868761697838075322208566789146516;
	weights[1] 	= 0.2303579701819450360445343292342979496503564028295724847960187005615069187121267091353097115250370353069595437838763582388183237;

	nodes[2] 	= -0.35030602639582364616478816984579880865761308674654489432958587678130955445896034023974202110130609037045075496003910396305064544;
	weights[2] 	= 0.206614303703924614403753319082330134997442184046624852630554025120798929032797783674773671116044713666256468517333966163123039;

	nodes[3] 	= 0.35030602639582364616478816984579880865761308674654489432958587678130955445896034023974202110130609037045075496003910396305064544;
	weights[3] 	= 0.206614303703924614403753319082330134997442184046624852630554025120798929032797783674773671116044713666256468517333966163123039;

	nodes[4] 	= -0.58396080911088383064619120251829199511064831181417768203563452710324487398749074445521957034474391285528679782117808634407661771;
	weights[4] 	= 0.1661949726099592813344765155162138434622670643368232565727138373238446754442743886036923836216940620099320536959981119727818;

	nodes[5] 	= 0.58396080911088383064619120251829199511064831181417768203563452710324487398749074445521957034474391285528679782117808634407661771;
	weights[5] 	= 0.1661949726099592813344765155162138434622670643368232565727138373238446754442743886036923836216940620099320536959981119727818;

	nodes[6] 	= -0.81779222425489556861107176373314933148024582037364509586131383654761132802003163720925154290418667989909215717987414835639319701;
	weights[6] 	= 0.119856555902390672457340276919591947630774033808605072502933413361244821165916942596872932176207426241817546570836229329361;

	nodes[7] 	= 0.81779222425489556861107176373314933148024582037364509586131383654761132802003163720925154290418667989909215717987414835639319701;
	weights[7] 	= 0.119856555902390672457340276919591947630774033808605072502933413361244821165916942596872932176207426241817546570836229329361;

	nodes[8] 	= -1.0518719000409926978750703176422310034713325401538902429279891606327945445094046545726042728288210206031376573207679321786096566;
	weights[8] 	= 0.07746762760551266250132799771774118400599302735252771092712322646257546757029942924436756907378941246150682320842835260575;

	nodes[9] 	= 1.0518719000409926978750703176422310034713325401538902429279891606327945445094046545726042728288210206031376573207679321786096566;
	weights[9] 	= 0.07746762760551266250132799771774118400599302735252771092712322646257546757029942924436756907378941246150682320842835260575;

	nodes[10] 	= -1.2862724534455953922291053673209415839515163739821664292148256443345019453045427264826097700229729499118060599692823561689626673;
	weights[10] 	= 0.0448499881323905691610974299864436667186536760085628593293752465804309263602808570706770837638206712031150765467424222737;

	nodes[11] 	= 1.2862724534455953922291053673209415839515163739821664292148256443345019453045427264826097700229729499118060599692823561689626673;
	weights[11] 	= 0.0448499881323905691610974299864436667186536760085628593293752465804309263602808570706770837638206712031150765467424222737;

	nodes[12] 	= -1.5210677923813427539015793904078806599603981314669739285999269600180038207350118875062628274768102586184684439628463352499938988;
	weights[12] 	= 0.023243228173755145713718283352935870000566778436841230680613299650792313550691796707977582375973068602311863206800866361;

	nodes[13] 	= 1.5210677923813427539015793904078806599603981314669739285999269600180038207350118875062628274768102586184684439628463352499938988;
	weights[13] 	= 0.023243228173755145713718283352935870000566778436841230680613299650792313550691796707977582375973068602311863206800866361;

	nodes[14] 	= -1.756333433253434927165494143837897917811038786099646510096345801773907421494532000074301820892142346026793586516506861076819067;
	weights[14] 	= 0.01077378662464244471761167939401355435497834669267859000607059900141785623628960637148599676648512023032422812762467527;

	nodes[15] 	= 1.756333433253434927165494143837897917811038786099646510096345801773907421494532000074301820892142346026793586516506861076819067;
	weights[15] 	= 0.01077378662464244471761167939401355435497834669267859000607059900141785623628960637148599676648512023032422812762467527;

	nodes[16] 	= -1.9921468380503870993777269537130106132376710321683601473869107407772116965634344235380563448194844713491498219170038776027890217;
	weights[16] 	= 0.00446229985950349651233241686505238176384667657005794134801403298271505024820046729036767568834560016638236097025748122;

	nodes[17] 	= 1.9921468380503870993777269537130106132376710321683601473869107407772116965634344235380563448194844713491498219170038776027890217;
	weights[17] 	= 0.00446229985950349651233241686505238176384667657005794134801403298271505024820046729036767568834560016638236097025748122;

	nodes[18] 	= -2.2285877756048472806128139285823348254307954572036329634948753580483619927103033542596051720170633867829092763229582280599816413;
	weights[18] 	= 0.0016496055361812379694842036204195492219706490622730621135452591001100063140184532894930625314645956444905043191170148;

	nodes[19] 	= 2.2285877756048472806128139285823348254307954572036329634948753580483619927103033542596051720170633867829092763229582280599816413;
	weights[19] 	= 0.0016496055361812379694842036204195492219706490622730621135452591001100063140184532894930625314645956444905043191170148;

	nodes[20] 	= -2.4657387122776618087803594460312134604845164572866280977144782220825018963858734828893482537221942901491326869475004648151294113;
	weights[20] 	= 0.0005435922495296247102835854311758469560406920958220924213665556884952016401317710062664722559744836824792536620669835;

	nodes[21] 	= 2.4657387122776618087803594460312134604845164572866280977144782220825018963858734828893482537221942901491326869475004648151294113;
	weights[21] 	= 0.0005435922495296247102835854311758469560406920958220924213665556884952016401317710062664722559744836824792536620669835;

	nodes[22] 	= -2.7036852380958850369910811895153307267056400172472487217021485677623004105559962680801674071205487578050874396149770156811743936;
	weights[22] 	= 0.00015944214368480672542586094694174305646267424308219585119351549413672423488278298508493069817059859545988132417407;

	nodes[23] 	= 2.7036852380958850369910811895153307267056400172472487217021485677623004105559962680801674071205487578050874396149770156811743936;
	weights[23] 	= 0.00015944214368480672542586094694174305646267424308219585119351549413672423488278298508493069817059859545988132417407;

	nodes[24] 	= -2.9425165353484220281301508642311092454600651501915671092091724942409118682680688239806487411886684110201049965836887337222644004;
	weights[24] 	= 0.000041557921102543471971680670846608601957555515452723115795127875767614688108474528991695708563123025122851018476967;

	nodes[25] 	= 2.9425165353484220281301508642311092454600651501915671092091724942409118682680688239806487411886684110201049965836887337222644004;
	weights[25] 	= 0.000041557921102543471971680670846608601957555515452723115795127875767614688108474528991695708563123025122851018476967;

	nodes[26] 	= -3.18232589785788087852618845545173207566236272773702346688147229439440778096868485813123504562665877593552942125335909892278832;
	weights[26] 	= 9.607776074179453878407395179794780771263999848710198651238311821650441000225334361886727172989512397271282307505e-6;

	nodes[27] 	= 3.18232589785788087852618845545173207566236272773702346688147229439440778096868485813123504562665877593552942125335909892278832;
	weights[27] 	= 9.607776074179453878407395179794780771263999848710198651238311821650441000225334361886727172989512397271282307505e-6;

	nodes[28] 	= -3.4232113106647766633068107024268081652823401212838129586268134947045705413504726427301991868674889413453153955235874852688279103;
	weights[28] 	= 1.966140849465920674182724387989581188329546233861429400470497525159357993392791785383181433514393320744002749809e-6;

	nodes[29] 	= 3.4232113106647766633068107024268081652823401212838129586268134947045705413504726427301991868674889413453153955235874852688279103;
	weights[29] 	= 1.966140849465920674182724387989581188329546233861429400470497525159357993392791785383181433514393320744002749809e-6;

	nodes[30] 	= -3.6652761017603784226564237350090443832113512156934819054954665273678294560928069967635607151551736179845310169716422562573765358;
	weights[30] 	= 3.55330458294966747960784131070474368466218609663185194057651714769961127557992740412652887683679224050115753503e-7;

	nodes[31] 	= 3.6652761017603784226564237350090443832113512156934819054954665273678294560928069967635607151551736179845310169716422562573765358;
	weights[31] 	= 3.55330458294966747960784131070474368466218609663185194057651714769961127557992740412652887683679224050115753503e-7;

	nodes[32] 	= -3.9086296798928610604178823186430520032847260475044610912172325256366544557457273471843898542618692537241392773944309234735286241;
	weights[32] 	= 5.6567852900929872797466765608193960517906645254758923664919013554506003682978333170963507217624927544726122989e-8;

	nodes[33] 	= 3.9086296798928610604178823186430520032847260475044610912172325256366544557457273471843898542618692537241392773944309234735286241;
	weights[33] 	= 5.6567852900929872797466765608193960517906645254758923664919013554506003682978333170963507217624927544726122989e-8;

	nodes[34] 	= -4.1533883754886327328212982350977318624029245054842328248657923639408267219636053106826259459436820687480735685421805860997523905;
	weights[34] 	= 7.910416614910404127902217338615213326851545560957616798935153721299618424038730584703823717840923608591089051e-9;

	nodes[35] 	= 4.1533883754886327328212982350977318624029245054842328248657923639408267219636053106826259459436820687480735685421805860997523905;
	weights[35] 	= 7.910416614910404127902217338615213326851545560957616798935153721299618424038730584703823717840923608591089051e-9;

	nodes[36] 	= -4.3996764055654277221052050303222186860401365642457298678312952435736353302270105075320399244164078326649540340789163612424328465;
	weights[36] 	= 9.68638492488057109168094830469848319446396089238113111506589587444482086875243180436531130248329786933834219e-10;

	nodes[37] 	= 4.3996764055654277221052050303222186860401365642457298678312952435736353302270105075320399244164078326649540340789163612424328465;
	weights[37] 	= 9.68638492488057109168094830469848319446396089238113111506589587444482086875243180436531130248329786933834219e-10;

	nodes[38] 	= -4.647626988421389327796403516758030676241778591597172390219641299667122476256117810192083018238540582660691482866445127201570773;
	weights[38] 	= 1.035023372624027806249642461257009052719935183986810946996807645503863769882884036504494137136846965229401628e-10;

	nodes[39] 	= 4.647626988421389327796403516758030676241778591597172390219641299667122476256117810192083018238540582660691482866445127201570773;
	weights[39] 	= 1.035023372624027806249642461257009052719935183986810946996807645503863769882884036504494137136846965229401628e-10;

	nodes[40] 	= -4.8973836402140374383571864625851491867784454298790300137892310295313496016083394024315887477682421423269843416928219832209563372;
	weights[40] 	= 9.6137828691596079274676973461617940400719012022443671561599781133057099558519685333282381209604135725691245e-12;

	nodes[41] 	= 4.8973836402140374383571864625851491867784454298790300137892310295313496016083394024315887477682421423269843416928219832209563372;
	weights[41] 	= 9.6137828691596079274676973461617940400719012022443671561599781133057099558519685333282381209604135725691245e-12;

	nodes[42] 	= -5.1491016937770269807397369905191176351490557537553593581154138817984439360562006195635036025143195772944154060025670904813903542;
	weights[42] 	= 7.7293031086017829077063075225966792261917344529631299727025280396995306310024390618321537859668831553506958e-13;

	nodes[43] 	= 5.1491016937770269807397369905191176351490557537553593581154138817984439360562006195635036025143195772944154060025670904813903542;
	weights[43] 	= 7.7293031086017829077063075225966792261917344529631299727025280396995306310024390618321537859668831553506958e-13;

	nodes[44] 	= -5.4029500908349492809017826467369108884291362005832231206013381489093859657198727553885431212615512364383632344993993874576965884;
	weights[44] 	= 5.3533724861984129146354684395712369163595679346575631419752679807706685689283830395308837248479021945074692e-14;

	nodes[45] 	= 5.4029500908349492809017826467369108884291362005832231206013381489093859657198727553885431212615512364383632344993993874576965884;
	weights[45] 	= 5.3533724861984129146354684395712369163595679346575631419752679807706685689283830395308837248479021945074692e-14;

	nodes[46] 	= -5.6591135131207480013905136090550641770434991599348548166573453729439893423598580610356523197406696505714971742618087344456714109;
	weights[46] 	= 3.177312959963735674863392193200611879704279441035488645015650086588966626732932621935878074900605018769593e-15;

	nodes[47] 	= 5.6591135131207480013905136090550641770434991599348548166573453729439893423598580610356523197406696505714971742618087344456714109;
	weights[47] 	= 3.177312959963735674863392193200611879704279441035488645015650086588966626732932621935878074900605018769593e-15;

	nodes[48] 	= -5.9177949371442053884389328722577887767569416448576946982201228519669614340836539336905187715052032665666120395552791385404751993;
	weights[48] 	= 1.606474294270265507933668780937795848562876040990974792448610073573618561350095747905198341915041329528978e-16;

	nodes[49] 	= 5.9177949371442053884389328722577887767569416448576946982201228519669614340836539336905187715052032665666120395552791385404751993;
	weights[49] 	= 1.606474294270265507933668780937795848562876040990974792448610073573618561350095747905198341915041329528978e-16;

	nodes[50] 	= -6.179218723493459220972123886168632183606790583048494286041044964933388644959428311860816746427284640311543409174217483927553301;
	weights[50] 	= 6.87377979909597744308049041694872816552063824878111931851519221727749789449288051073583496820964673944128e-18;

	nodes[51] 	= 6.179218723493459220972123886168632183606790583048494286041044964933388644959428311860816746427284640311543409174217483927553301;
	weights[51] 	= 6.87377979909597744308049041694872816552063824878111931851519221727749789449288051073583496820964673944128e-18;

	nodes[52] 	= -6.4436343875167893449827537653413085280212518609150755734613056389307562870830730543033090982817558625729151615190692416598207011;
	weights[52] 	= 2.470550592288001928395026574467803259149438074940559861468746012788294846734635368389341449941492613358246e-19;

	nodes[53] 	= 6.4436343875167893449827537653413085280212518609150755734613056389307562870830730543033090982817558625729151615190692416598207011;
	weights[53] 	= 2.470550592288001928395026574467803259149438074940559861468746012788294846734635368389341449941492613358246e-19;

	nodes[54] 	= -6.7113212484546606120019395730292753144172334487133730513789089669716678501773058740913076469045549390551772078836983628725387706;
	weights[54] 	= 7.39634235835972737063963465318530661575095700634291440117739352261489174507717397577996316417979063329194e-21;

	nodes[55] 	= 6.7113212484546606120019395730292753144172334487133730513789089669716678501773058740913076469045549390551772078836983628725387706;
	weights[55] 	= 7.39634235835972737063963465318530661575095700634291440117739352261489174507717397577996316417979063329194e-21;

	nodes[56] 	= -6.9825942253568729829603328341911630102860397024131975037117604407509140385948408652621221426155129928947542821414123208074401629;
	weights[56] 	= 1.82691793828310191648373143609520231973886235338697145288521606988436009518411532708790404651637684200433e-22;

	nodes[57] 	= 6.9825942253568729829603328341911630102860397024131975037117604407509140385948408652621221426155129928947542821414123208074401629;
	weights[57] 	= 1.82691793828310191648373143609520231973886235338697145288521606988436009518411532708790404651637684200433e-22;

	nodes[58] 	= -7.2578111510465870621783209371927120112270704048591261210661659550520204093317907459103419034677521933907343569127332300803824874;
	weights[58] 	= 3.68267290531566104523621030551248934151478693750305867076595899195257773125191332832213573909686162796284e-24;

	nodes[59] 	= 7.2578111510465870621783209371927120112270704048591261210661659550520204093317907459103419034677521933907343569127332300803824874;
	weights[59] 	= 3.68267290531566104523621030551248934151478693750305867076595899195257773125191332832213573909686162796284e-24;

	nodes[60] 	= -7.5373821269924039000518228453681666619245593949803798233366804912407603735479993658763397659273132469817244285032451252904851605;
	weights[60] 	= 5.98275101384913637295754147024204767367899851664801214463459025036843781035106488819215390493563959062689e-26;

	nodes[61] 	= 7.5373821269924039000518228453681666619245593949803798233366804912407603735479993658763397659273132469817244285032451252904851605;
	weights[61] 	= 5.98275101384913637295754147024204767367899851664801214463459025036843781035106488819215390493563959062689e-26;

	nodes[62] 	= -7.8217816701739296532900162154851977549030287890596714130796260313916760004538314209301145178091067209934768124833521110472966869;
	weights[62] 	= 7.7199678213751067139704012772376357086904262930780163207322964247521333936151963335652119719584407658999e-28;

	nodes[63] 	= 7.8217816701739296532900162154851977549030287890596714130796260313916760004538314209301145178091067209934768124833521110472966869;
	weights[63] 	= 7.7199678213751067139704012772376357086904262930780163207322964247521333936151963335652119719584407658999e-28;

	nodes[64] 	= -8.1115647551404793679785517758805941291202458629877075975985339978510671345431920453359373721564479614392323411446286888395401069;
	weights[64] 	= 7.77884918729073928029640806276697940677153824406184361455623163577544638293524488798518935458504079324012e-30;

	nodes[65] 	= 8.1115647551404793679785517758805941291202458629877075975985339978510671345431920453359373721564479614392323411446286888395401069;
	weights[65] 	= 7.77884918729073928029640806276697940677153824406184361455623163577544638293524488798518935458504079324012e-30;

	nodes[66] 	= -8.4073884130034551084389823130692817955143653517114334825006152193493762993105263959817914456040617508201310894051497114423244709;
	weights[66] 	= 5.99871855161444654725810666332667583464170876695564274028732922296463176949507069881352397541288714241176e-32;

	nodes[67] 	= 8.4073884130034551084389823130692817955143653517114334825006152193493762993105263959817914456040617508201310894051497114423244709;
	weights[67] 	= 5.99871855161444654725810666332667583464170876695564274028732922296463176949507069881352397541288714241176e-32;

	nodes[68] 	= -8.7100414635651490016570182554574411318834720428016011631525324614671279638965250897524006935912704112549339934554767799438746556;
	weights[68] 	= 3.45600725880780036448470350995121486231562416709042211501176279427216193020812720501610190506063101493505e-34;

	nodes[69] 	= 8.7100414635651490016570182554574411318834720428016011631525324614671279638965250897524006935912704112549339934554767799438746556;
	weights[69] 	= 3.45600725880780036448470350995121486231562416709042211501176279427216193020812720501610190506063101493505e-34;

	nodes[70] 	= -9.0204865095226343681918998952039319309043647014528187043831181396435585335944575067484035383810159371705436148484135415764829339;
	weights[70] 	= 1.444559003928600998204640462019928605794433379096220186819413424073515804668583140834544421346501403870043e-36;

	nodes[71] 	= 9.0204865095226343681918998952039319309043647014528187043831181396435585335944575067484035383810159371705436148484135415764829339;
	weights[71] 	= 1.444559003928600998204640462019928605794433379096220186819413424073515804668583140834544421346501403870043e-36;

	nodes[72] 	= -9.3399210724883917263685844563259862988886842494893949011598434549174368267608927033988252977363848631062926024019578922955925002;
	weights[72] 	= 4.224614459802157011871097339143870696995306192904767456777217889897112208595593920816501725633739229609972e-39;

	nodes[73] 	= 9.3399210724883917263685844563259862988886842494893949011598434549174368267608927033988252977363848631062926024019578922955925002;
	weights[73] 	= 4.224614459802157011871097339143870696995306192904767456777217889897112208595593920816501725633739229609972e-39;

	nodes[74] 	= -9.66986987433745367481933434299522272395679698866254344929733727625432092097795315694798029545105852183100298087272100834086301;
	weights[74] 	= 8.256641293694103914162551092298294863641627572045039095683954793676298482629197508267258426225536005885616e-42;

	nodes[75] 	= 9.66986987433745367481933434299522272395679698866254344929733727625432092097795315694798029545105852183100298087272100834086301;
	weights[75] 	= 8.256641293694103914162551092298294863641627572045039095683954793676298482629197508267258426225536005885616e-42;

	nodes[76] 	= -10.012330403392185672840394695973292243479398344090691942520098618050097823115713538921449901683063836357207376399485227389035293;
	weights[76] 	= 1.0159844536444112226835395960767072925579066591235179692755309508762817294936735253103814299703325709784333e-44;

	nodes[77] 	= 10.012330403392185672840394695973292243479398344090691942520098618050097823115713538921449901683063836357207376399485227389035293;
	weights[77] 	= 1.0159844536444112226835395960767072925579066591235179692755309508762817294936735253103814299703325709784333e-44;

	nodes[78] 	= -10.370015493271170838618350217144548766762523306968884587342889663272767972645521709343387688626711713600051091940372624314632311;
	weights[78] 	= 7.2644220875022033758974770504122600004758181082133680556203136237807867713205802848561774576681500390266801e-48;

	nodes[79] 	= 10.370015493271170838618350217144548766762523306968884587342889663272767972645521709343387688626711713600051091940372624314632311;
	weights[79] 	= 7.2644220875022033758974770504122600004758181082133680556203136237807867713205802848561774576681500390266801e-48;

	nodes[80] 	= -10.746787108514194658366250891710800267234214999761095626091975765710097559054057998711663185958474175523744727677229316558237376;
	weights[80] 	= 2.69594387379931919320455821252336412507169142698190041868462443651927644692970249245179561784564649713032474e-51;

	nodes[81] 	= 10.746787108514194658366250891710800267234214999761095626091975765710097559054057998711663185958474175523744727677229316558237376;
	weights[81] 	= 2.69594387379931919320455821252336412507169142698190041868462443651927644692970249245179561784564649713032474e-51;

	nodes[82] 	= -11.148508777693782648381373035640232283961641977343805956862221207820974011422776939250181894439938591296632845082871259831580345;
	weights[82] 	= 4.38496629982436954146937648508248800048835933715737016717862766923703587906507664994856965559893694239526689e-55;

	nodes[83] 	= 11.148508777693782648381373035640232283961641977343805956862221207820974011422776939250181894439938591296632845082871259831580345;
	weights[83] 	= 4.38496629982436954146937648508248800048835933715737016717862766923703587906507664994856965559893694239526689e-55;

	nodes[84] 	= -11.584960252804917898578566183927812401307577470511972947635728561933356535474285663307424973925196726154175981906991267420725934;
	weights[84] 	= 2.3683907001837188045764217693783242926859066815356871912970413943823721593728268791769372299326107090263992798e-59;

	nodes[85] 	= 11.584960252804917898578566183927812401307577470511972947635728561933356535474285663307424973925196726154175981906991267420725934;
	weights[85] 	= 2.3683907001837188045764217693783242926859066815356871912970413943823721593728268791769372299326107090263992798e-59;

	nodes[86] 	= -12.07513081691091989189614561068344122505368740803656726602778920781998897149760196632532469725365427417527640822087163806310143;
	weights[86] 	= 2.50628938960034505868032137510311642702375702955658302304574544990545882816561047384699547849250674971464633621e-64;

	nodes[87] 	= 12.07513081691091989189614561068344122505368740803656726602778920781998897149760196632532469725365427417527640822087163806310143;
	weights[87] 	= 2.50628938960034505868032137510311642702375702955658302304574544990545882816561047384699547849250674971464633621e-64;

	nodes[88] 	= -12.668764375434174664571755115558275277169399547418042450278862018936691825125647009879230024178454294321070780226399914851127028;
	weights[88] 	= 1.3602242492354694256162506561422437148434015895251201078150056397978485869179400094537412247912811340149161452731e-70;

	nodes[89] 	= 12.668764375434174664571755115558275277169399547418042450278862018936691825125647009879230024178454294321070780226399914851127028;
	weights[89] 	= 1.3602242492354694256162506561422437148434015895251201078150056397978485869179400094537412247912811340149161452731e-70;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_90_hpp__)*/