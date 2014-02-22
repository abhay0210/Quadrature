//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_68.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:57.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 68.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_68_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_68_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_68(long double*& nodes, long double*& weights) {
	nodes	= new long double[68];
	weights	= new long double[68];

	nodes[0] 	= 0.99896367364672757126033140632120763125488647292439524958093012998093379277676538430698483902179024756967147614293498975931091089;
	weights[0] 	= 0.00009431965989570349602668935839309407724022666292695918304703472626850006254975929111724088051890232735756569863212170473072855862;

	nodes[1] 	= 0.99585684253153125890287270628013004685210347158917677061748156345004424073192261708823900077976391771936351329237749220018381821;
	weights[1] 	= 0.0003764970771761733530236836903619327996568243412715588921779082334255558665565239100888938470909482271489093069058126693000527033;

	nodes[2] 	= 0.99068594603633075234232296009620600513999918345482439066065130419979664491201480579692260427192696929740145379914552540937098428;
	weights[2] 	= 0.0008441940408937319728095298304453091741467315072411939337590783822281981423560667384120424434635812185767314117686872192366083601;

	nodes[3] 	= 0.9834617016337420922262477503982408943919175614149391593573913304066643552152475062935391449975435937516980257512155690000347212;
	weights[3] 	= 0.0014935350667119662417318486316274849428268295468891496588911441143871311218574555218061579183757030115830360518310561237163652923;

	nodes[4] 	= 0.97419908267347904547803688498602020722427810339989404393538618384649275858893043515381254206822295188795694471576010809970850428;
	weights[4] 	= 0.0023191395103894722178972184400255541980676809630652361102335619253684911202344454891491888833018423769528527086749479967223291452;

	nodes[5] 	= 0.96291728734779929501522359737323879935501845807334643917499265203315934883218397308490082038200959691878094136685974036500898523;
	weights[5] 	= 0.0033141661534926030233026657655376871918571318634137565533402731304827215938294302775262133567774169078012616375155938077299871829;

	nodes[6] 	= 0.94963969890031929609445759020439325377845270696699460770709543735265675981865622525825276479230253050980345181863523209988101644;
	weights[6] 	= 0.004470369891885962424006279641133470377338909761411864514861632394511495188803546544923363415164893160503305508282994990642576099;

	nodes[7] 	= 0.93439383716067110686775603673491348831882258165170116851691615626767890084449764206488386388838731303137862127021320236186483461;
	weights[7] 	= 0.005778170057261958568945119338690800147555028541706313004534629795570305808682624382282728368576994073981191654868972483281108936;

	nodes[8] 	= 0.91721130150545301784380544796561549369029417221140021679381945709754981250835456568863368054769512911105572553350732034780736688;
	weights[8] 	= 0.007226729805575707031838816528820610171772173836903963872796756509100945693469118028543788045805446973024608828637110479201161237;

	nodes[9] 	= 0.89812770536369612031090718745809722440304342264222212119975559862219089719290554566714007496893343710502676661330474056566117468;
	weights[9] 	= 0.008804045914547709199013790080889075382309990023582051453191484063942958023370959861529366183714369749553849195101936568991495624;

	nodes[10] 	= 0.87718260240259423570241746805319917069676467697350025482153352599001786878657646050116229890511898427569929598521095307694437201;
	weights[10] 	= 0.01049704824614391825953948146208018624013838837481242153608998675359951759692741812508806946495588427120812568197854804641011155;

	nodes[11] 	= 0.85441940454648855254821561955025080004785563489489246514875861672714218532807272024715782542407156669039477087754504456745052616;
	weights[11] 	= 0.012291708049855758562015975161169033299205539536579425396581007421129410646141533131529096013205367823508098667225760084562677037;

	nodes[12] 	= 0.82988529199902514438971870843563820046995187092336134750091406524354030446811134872794216352259482231744844395045670916458467916;
	weights[12] 	= 0.014173154209345011394294089167392772349384269113748222540344501860650572212704987742643142431117873249777607910299074208163013387;

	nodes[13] 	= 0.80363111545497818740800281158207026764217654429598272208589120702221291731058012462720648292694906747488114611482521265381738716;
	weights[13] 	= 0.016125796469197257300224267190530343176203382937966981996793511166274983668350504628756897472355450053072705656284860173183065265;

	nodes[14] 	= 0.77571129070441980704110101096953689558772273032391012075560931352920163669603364407943660419325937764173072643974603195277443613;
	weights[14] 	= 0.018133454620688187254052694625654099303928825066605417629820605058734370771013716958485508007303714747042610743944136567905093542;

	nodes[15] 	= 0.74618368584768550621642886814281482700061904007689768374472690194876004806110832815670909330616248774493877885279128874905721381;
	weights[15] 	= 0.020179492576088837668465260358194106159504791076002726935121217688167983296506286267197345589289558351211883246523935143518650629;

	nodes[16] 	= 0.71510950135489938236126676259267429285027720444551288958123176295915974668808832976132681762781626781609218998449110298355778223;
	weights[16] 	= 0.022246956220527831107916945783590529077389696542667009480300601189289946263144255483275577112663384102068370870563821962423917745;

	nodes[17] 	= 0.68255314321865408287453754537254057809877075729066644435432795499263307826859782836948455272756307152616592468087235506328250156;
	weights[17] 	= 0.024318713899126677537375686135507770333130169135731358651065630650530016844764534777623393094950258862408143566264121106803697745;

	nodes[18] 	= 0.64858208946275594026813267955035073688449657090353109927234817647738103998844217847724990522816166291925810372377873537034291976;
	weights[18] 	= 0.0263775983752874884121861905464922781761646763842942411761179591466877326120878149983797184718304217124238055106724011668020968;

	nodes[19] 	= 0.61326675028371629767350557081739432650771858759084961134579677714160750804558061062353731352082797520529126629528276322913923152;
	weights[19] 	= 0.028406549083822023701722217563870375366700412543560123154642722311019570313304422510624509234805771273602771908190233645449715051;

	nodes[20] 	= 0.57668032211486714125104827526685282397887635596604848240693076543002488920055411035707325981086274023281703192310722417220771023;
	weights[20] 	= 0.030388753500167843798379994366423613310392370223766591574663392057694639857530081408717552389734396725966745990656031734448028856;

	nodes[21] 	= 0.53889863591557544521875564651025583569696000588694547782048236157325822569461115243251840900210976356685460364826510619294793199;
	weights[21] 	= 0.032307786454261718889205719641318098146464587004919484255433452520747033952550515291168920871888306145127829197542132349290058891;

	nodes[22] 	= 0.5;
	weights[22] 	= 0.034147746234671665635463515035646770480404015210598976314945049916389308763980532593782987231979533347632044418622633767903193963;

	nodes[23] 	= 0.4600650377311521260415757598109517955579264670374497717604477684076755670821542318744664300196804840028168724946698835663629789;
	weights[23] 	= 0.035893386355185908885694621071582348737103216753351509191409612585763083512860790605279812711551858222778693941071013481785600476;

	nodes[24] 	= 0.419176520416664117651824431013277222873227115623128288210550798020019351531368506731165740968901177486546481369270268027976108;
	weights[24] 	= 0.037530241891999314119523352014507994850758835856159802163048799541658421803874459868759528227133721742148433539683423132058306367;

	nodes[25] 	= 0.3774191957526144546688173892788116786322805958639747793148545270581891368664341951733852907510989940921101875038627621802317528;
	weights[25] 	= 0.039044749344627575596395282676977856419960886370396635541488299139530849072300575938529422785689714203084585517286346671120064516;

	nodes[26] 	= 0.3348796121709861519581150708478901575074209905114080600850431539292833152268053278162892397693819308324399220274368336296918014;
	weights[26] 	= 0.040424359027343876617008990893173777841816524490014561794880996571703753794015794667380098073752941971257247274741810245287925834;

	nodes[27] 	= 0.2916459394548249626034993396134796291255073461092275995810582288538596803203326067843279893406598803617910200348877530364260027;
	weights[27] 	= 0.041657639059827181515654125495760216429610180322401357868590907256880109562962084920793392485706965455903092562306198432280361036;

	nodes[28] 	= 0.247807785992899912653956834780564506504741253627833549593760889073999602144095643323574002754193329102688751382368637381451203;
	weights[28] 	= 0.042734370095322897139707418522165324691561202015117186596249225513005949670987379426764183994518265685394456329165851765652482999;

	nodes[29] 	= 0.2034560130526337898780287220615784267778336668900969239623685354038967117575478971015436714861400427648646729658439433508238026;
	weights[29] 	= 0.043645630001368531178455490071965964423964329583783361179907249750099139042651232375445265459504615183548900082438337401645161199;

	nodes[30] 	= 0.1586825464562512998266550257653765927310998513277910477613068427384772641484639979854472596951279353896478948304671704090903985;
	weights[30] 	= 0.044383867791393185447929216106948641509324176812886221995534864978473940948264723846797738088078357874240286438432158484620185448;

	nodes[31] 	= 0.1135801860504748304358026363835452260481176279154174947079282500753368951977744410614271976207460616361745794186821076939899797;
	weights[31] 	= 0.044942966194570366938863946351942587612832473646327006760299832157402688166141442530265288945798169669166774352323296883422161425;

	nodes[32] 	= 0.0682424133646709759211884790224590239330915517188607736988415333786505927247941969391979114463386147875783226628480314010764955;
	weights[32] 	= 0.045318292345450610677619150823011693229113771283867678636354113908185087291885117583393465849126823695932631731844256758651878915;

	nodes[33] 	= 0.0227631978561056831542018485029483706489090420786077896727749092628756834585037402540044734810474175853045251076659085094938458;
	weights[33] 	= 0.045506736173343654449371573448044321421464102509806105697219105658049689284892113930948808985797814600547864488040959404833599339;

	nodes[34] 	= -0.0227631978561056831542018485029483706489090420786077896727749092628756834585037402540044734810474175853045251076659085094938458;
	weights[34] 	= 0.045506736173343654449371573448044321421464102509806105697219105658049689284892113930948808985797814600547864488040959404833599339;

	nodes[35] 	= -0.0682424133646709759211884790224590239330915517188607736988415333786505927247941969391979114463386147875783226628480314010764955;
	weights[35] 	= 0.045318292345450610677619150823011693229113771283867678636354113908185087291885117583393465849126823695932631731844256758651878915;

	nodes[36] 	= -0.1135801860504748304358026363835452260481176279154174947079282500753368951977744410614271976207460616361745794186821076939899797;
	weights[36] 	= 0.044942966194570366938863946351942587612832473646327006760299832157402688166141442530265288945798169669166774352323296883422161425;

	nodes[37] 	= -0.1586825464562512998266550257653765927310998513277910477613068427384772641484639979854472596951279353896478948304671704090903985;
	weights[37] 	= 0.044383867791393185447929216106948641509324176812886221995534864978473940948264723846797738088078357874240286438432158484620185448;

	nodes[38] 	= -0.2034560130526337898780287220615784267778336668900969239623685354038967117575478971015436714861400427648646729658439433508238026;
	weights[38] 	= 0.043645630001368531178455490071965964423964329583783361179907249750099139042651232375445265459504615183548900082438337401645161199;

	nodes[39] 	= -0.247807785992899912653956834780564506504741253627833549593760889073999602144095643323574002754193329102688751382368637381451203;
	weights[39] 	= 0.042734370095322897139707418522165324691561202015117186596249225513005949670987379426764183994518265685394456329165851765652482999;

	nodes[40] 	= -0.2916459394548249626034993396134796291255073461092275995810582288538596803203326067843279893406598803617910200348877530364260027;
	weights[40] 	= 0.041657639059827181515654125495760216429610180322401357868590907256880109562962084920793392485706965455903092562306198432280361036;

	nodes[41] 	= -0.3348796121709861519581150708478901575074209905114080600850431539292833152268053278162892397693819308324399220274368336296918014;
	weights[41] 	= 0.040424359027343876617008990893173777841816524490014561794880996571703753794015794667380098073752941971257247274741810245287925834;

	nodes[42] 	= -0.3774191957526144546688173892788116786322805958639747793148545270581891368664341951733852907510989940921101875038627621802317528;
	weights[42] 	= 0.03904474934462757559639528267697785641996088637039663554148829913953084907230057593852942278568971420308458551728634667112006452;

	nodes[43] 	= -0.419176520416664117651824431013277222873227115623128288210550798020019351531368506731165740968901177486546481369270268027976108;
	weights[43] 	= 0.03753024189199931411952335201450799485075883585615980216304879954165842180387445986875952822713372174214843353968342313205830637;

	nodes[44] 	= -0.4600650377311521260415757598109517955579264670374497717604477684076755670821542318744664300196804840028168724946698835663629789;
	weights[44] 	= 0.03589338635518590888569462107158234873710321675335150919140961258576308351286079060527981271155185822277869394107101348178560048;

	nodes[45] 	= -0.5;
	weights[45] 	= 0.03414774623467166563546351503564677048040401521059897631494504991638930876398053259378298723197953334763204441862263376790319396;

	nodes[46] 	= -0.538898635915575445218755646510255835696960005886945477820482361573258225694611152432518409002109763566854603648265106192947932;
	weights[46] 	= 0.03230778645426171888920571964131809814646458700491948425543345252074703395255051529116892087188830614512782919754213234929005889;

	nodes[47] 	= -0.5766803221148671412510482752668528239788763559660484824069307654300248892005541103570732598108627402328170319231072241722077102;
	weights[47] 	= 0.03038875350016784379837999436642361331039237022376659157466339205769463985753008140871755238973439672596674599065603173444802886;

	nodes[48] 	= -0.6132667502837162976735055708173943265077185875908496113457967771416075080455806106235373135208279752052912662952827632291392315;
	weights[48] 	= 0.02840654908382202370172221756387037536670041254356012315464272231101957031330442251062450923480577127360277190819023364544971505;

	nodes[49] 	= -0.6485820894627559402681326795503507368844965709035310992723481764773810399884421784772499052281616629192581037237787353703429198;
	weights[49] 	= 0.0263775983752874884121861905464922781761646763842942411761179591466877326120878149983797184718304217124238055106724011668020968;

	nodes[50] 	= -0.6825531432186540828745375453725405780987707572906664443543279549926330782685978283694845527275630715261659246808723550632825016;
	weights[50] 	= 0.02431871389912667753737568613550777033313016913573135865106563065053001684476453477762339309495025886240814356626412110680369775;

	nodes[51] 	= -0.7151095013548993823612667625926742928502772044455128895812317629591597466880883297613268176278162678160921899844911029835577822;
	weights[51] 	= 0.02224695622052783110791694578359052907738969654266700948030060118928994626314425548327557711266338410206837087056382196242391774;

	nodes[52] 	= -0.7461836858476855062164288681428148270006190400768976837447269019487600480611083281567090933061624877449387788527912887490572138;
	weights[52] 	= 0.02017949257608883766846526035819410615950479107600272693512121768816798329650628626719734558928955835121188324652393514351865063;

	nodes[53] 	= -0.7757112907044198070411010109695368955877227303239101207556093135292016366960336440794366041932593776417307264397460319527744361;
	weights[53] 	= 0.01813345462068818725405269462565409930392882506660541762982060505873437077101371695848550800730371474704261074394413656790509354;

	nodes[54] 	= -0.8036311154549781874080028115820702676421765442959827220858912070222129173105801246272064829269490674748811461148252126538173872;
	weights[54] 	= 0.01612579646919725730022426719053034317620338293796698199679351116627498366835050462875689747235545005307270565628486017318306526;

	nodes[55] 	= -0.8298852919990251443897187084356382004699518709233613475009140652435403044681113487279421635225948223174484439504567091645846792;
	weights[55] 	= 0.01417315420934501139429408916739277234938426911374822254034450186065057221270498774264314243111787324977760791029907420816301339;

	nodes[56] 	= -0.8544194045464885525482156195502508000478556348948924651487586167271421853280727202471578254240715666903947708775450445674505262;
	weights[56] 	= 0.01229170804985575856201597516116903329920553953657942539658100742112941064614153313152909601320536782350809866722576008456267704;

	nodes[57] 	= -0.877182602402594235702417468053199170696764676973500254821533525990017868786576460501162298905118984275699295985210953076944372;
	weights[57] 	= 0.01049704824614391825953948146208018624013838837481242153608998675359951759692741812508806946495588427120812568197854804641011155;

	nodes[58] 	= -0.8981277053636961203109071874580972244030434226422221211997555986221908971929055456671400749689334371050267666133047405656611747;
	weights[58] 	= 0.00880404591454770919901379008088907538230999002358205145319148406394295802337095986152936618371436974955384919510193656899149562;

	nodes[59] 	= -0.9172113015054530178438054479656154936902941722114002167938194570975498125083545656886336805476951291110557255335073203478073669;
	weights[59] 	= 0.007226729805575707031838816528820610171772173836903963872796756509100945693469118028543788045805446973024608828637110479201161237;

	nodes[60] 	= -0.93439383716067110686775603673491348831882258165170116851691615626767890084449764206488386388838731303137862127021320236186483461;
	weights[60] 	= 0.005778170057261958568945119338690800147555028541706313004534629795570305808682624382282728368576994073981191654868972483281108936;

	nodes[61] 	= -0.94963969890031929609445759020439325377845270696699460770709543735265675981865622525825276479230253050980345181863523209988101644;
	weights[61] 	= 0.004470369891885962424006279641133470377338909761411864514861632394511495188803546544923363415164893160503305508282994990642576099;

	nodes[62] 	= -0.96291728734779929501522359737323879935501845807334643917499265203315934883218397308490082038200959691878094136685974036500898523;
	weights[62] 	= 0.003314166153492603023302665765537687191857131863413756553340273130482721593829430277526213356777416907801261637515593807729987183;

	nodes[63] 	= -0.97419908267347904547803688498602020722427810339989404393538618384649275858893043515381254206822295188795694471576010809970850428;
	weights[63] 	= 0.002319139510389472217897218440025554198067680963065236110233561925368491120234445489149188883301842376952852708674947996722329145;

	nodes[64] 	= -0.9834617016337420922262477503982408943919175614149391593573913304066643552152475062935391449975435937516980257512155690000347212;
	weights[64] 	= 0.001493535066711966241731848631627484942826829546889149658891144114387131121857455521806157918375703011583036051831056123716365292;

	nodes[65] 	= -0.99068594603633075234232296009620600513999918345482439066065130419979664491201480579692260427192696929740145379914552540937098428;
	weights[65] 	= 0.00084419404089373197280952983044530917414673150724119393375907838222819814235606673841204244346358121857673141176868721923660836;

	nodes[66] 	= -0.99585684253153125890287270628013004685210347158917677061748156345004424073192261708823900077976391771936351329237749220018381821;
	weights[66] 	= 0.000376497077176173353023683690361932799656824341271558892177908233425555866556523910088893847090948227148909306905812669300052703;

	nodes[67] 	= -0.99896367364672757126033140632120763125488647292439524958093012998093379277676538430698483902179024756967147614293498975931091089;
	weights[67] 	= 0.000094319659895703496026689358393094077240226662926959183047034726268500062549759291117240880518902327357565698632121704730728559;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_68_hpp__)*/