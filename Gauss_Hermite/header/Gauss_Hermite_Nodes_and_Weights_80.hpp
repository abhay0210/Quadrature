//
//        Gauss_Hermite_Nodes_and_Weights_80.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 80.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_80_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_80_hpp__

void Gauss_Hermite_Nodes_and_Weights_80(long double*& nodes, long double*& weights) {
	nodes	= new long double[80];
	weights	= new long double[80];

	nodes[0] 	= -0.12379686317313209227373958218337447770032462656565469245173601311118508179827773673861433871984605745608229858422521383019205216;
	weights[0] 	= 0.2438358538072118305639390032350151189745146770943662365001056724305589408717814875463768537926635748499312061172243622064906339;

	nodes[1] 	= 0.12379686317313209227373958218337447770032462656565469245173601311118508179827773673861433871984605745608229858422521383019205216;
	weights[1] 	= 0.2438358538072118305639390032350151189745146770943662365001056724305589408717814875463768537926635748499312061172243622064906339;

	nodes[2] 	= -0.37143774948304436122060055521175376830633251678064530545155517029849214273832966421705836343700569048836693798883289625163711414;
	weights[2] 	= 0.215774946274330473378984197199619439996209849927052019508767156929079315227561152139846334792829169867234092151790175849416198;

	nodes[3] 	= 0.37143774948304436122060055521175376830633251678064530545155517029849214273832966421705836343700569048836693798883289625163711414;
	weights[3] 	= 0.215774946274330473378984197199619439996209849927052019508767156929079315227561152139846334792829169867234092151790175849416198;

	nodes[4] 	= -0.61922034962756717039065752745061197925275315401726644092921996832504551215176660659202604905645619533413296732280789684762631578;
	weights[4] 	= 0.16893796927590193080452305261840799126509849346383958838145850970121493526184192237826007467228359121405076437835869100784;

	nodes[5] 	= 0.61922034962756717039065752745061197925275315401726644092921996832504551215176660659202604905645619533413296732280789684762631578;
	weights[5] 	= 0.16893796927590193080452305261840799126509849346383958838145850970121493526184192237826007467228359121405076437835869100784;

	nodes[6] 	= -0.86723992270397533180855892447537042557347355701683862985108657539260265752748600198936414363325466043552647317130798466391094117;
	weights[6] 	= 0.116980733804299213217430648534320777451986453129623084661368887632795478689427848613565346424915914209990728886034063412995;

	nodes[7] 	= 0.86723992270397533180855892447537042557347355701683862985108657539260265752748600198936414363325466043552647317130798466391094117;
	weights[7] 	= 0.116980733804299213217430648534320777451986453129623084661368887632795478689427848613565346424915914209990728886034063412995;

	nodes[8] 	= -1.1155929146033490667178076005829869813717122214380117102156507884239834921406299378821820953877942547750844651871464101188017872;
	weights[8] 	= 0.07160074769184338910433128725926202808108431189170803679317674991842433470804121543174295972992571617631925891406922768695;

	nodes[9] 	= 1.1155929146033490667178076005829869813717122214380117102156507884239834921406299378821820953877942547750844651871464101188017872;
	weights[9] 	= 0.07160074769184338910433128725926202808108431189170803679317674991842433470804121543174295972992571617631925891406922768695;

	nodes[10] 	= -1.3643774570540068386634190462852538263531462360832829966993856073774433547232135920655002091531218173361623660256194374196273938;
	weights[10] 	= 0.0387085999148379784296022664854950677035318785386856545670739948599525836147369309431278473096951660332619707393309070812;

	nodes[11] 	= 1.3643774570540068386634190462852538263531462360832829966993856073774433547232135920655002091531218173361623660256194374196273938;
	weights[11] 	= 0.0387085999148379784296022664854950677035318785386856545670739948599525836147369309431278473096951660332619707393309070812;

	nodes[12] 	= -1.6136938918510608680176196769545811416808121786877445866541824558026673736158405343827051622073262600164394292905818669414298891;
	weights[12] 	= 0.018465751154427887850377578237521612035403550281858218890576497670724356289460107727658836428895110151022120190869930713;

	nodes[13] 	= 1.6136938918510608680176196769545811416808121786877445866541824558026673736158405343827051622073262600164394292905818669414298891;
	weights[13] 	= 0.018465751154427887850377578237521612035403550281858218890576497670724356289460107727658836428895110151022120190869930713;

	nodes[14] 	= -1.8636453287449285262599344846424697565845638962691413494746144635955541360194731770155473813435757284433196331495195534896987279;
	weights[14] 	= 0.007764039405399641473987037309965583558872889591393445121780189139978555783544385104249524094693002358335490751762334258;

	nodes[15] 	= 1.8636453287449285262599344846424697565845638962691413494746144635955541360194731770155473813435757284433196331495195534896987279;
	weights[15] 	= 0.007764039405399641473987037309965583558872889591393445121780189139978555783544385104249524094693002358335490751762334258;

	nodes[16] 	= -2.1143382465070100280082957415998800403332621355109898654277070055639678388498801627535153105399970503690379485782896390122985994;
	weights[16] 	= 0.00287319753308972434103873093909814664906174578270474436307320515862912530984033290077874534839066364797224871862954814;

	nodes[17] 	= 2.1143382465070100280082957415998800403332621355109898654277070055639678388498801627535153105399970503690379485782896390122985994;
	weights[17] 	= 0.00287319753308972434103873093909814664906174578270474436307320515862912530984033290077874534839066364797224871862954814;

	nodes[18] 	= -2.3658831480742250652602713692938796262514916254241162247204152783061961530695198559485325650654833969725925406183187220438224489;
	weights[18] 	= 0.00093431768696117686301352650179073787742914817484960727412788942989327984556021833826606943283480642747578032261628918;

	nodes[19] 	= 2.3658831480742250652602713692938796262514916254241162247204152783061961530695198559485325650654833969725925406183187220438224489;
	weights[19] 	= 0.00093431768696117686301352650179073787742914817484960727412788942989327984556021833826606943283480642747578032261628918;

	nodes[20] 	= -2.6183952824717841944861975692463900192730482760988510149560190940290253658186035402302492134564573663419859285659233122742445628;
	weights[20] 	= 0.0002664778866933508067302694921755422128686515867058883967153311076362963392607253216005958871803934214107767674207425;

	nodes[21] 	= 2.6183952824717841944861975692463900192730482760988510149560190940290253658186035402302492134564573663419859285659233122742445628;
	weights[21] 	= 0.0002664778866933508067302694921755422128686515867058883967153311076362963392607253216005958871803934214107767674207425;

	nodes[22] 	= -2.8719954485287335507154590545576510491952246886664815805089660474088654496606028717986187401208562144290323554738115091925474048;
	weights[22] 	= 0.0000665174124181529042492611084817766154335577624553673414151572104508506867106149016896437686225887156020154358457485;

	nodes[23] 	= 2.8719954485287335507154590545576510491952246886664815805089660474088654496606028717986187401208562144290323554738115091925474048;
	weights[23] 	= 0.0000665174124181529042492611084817766154335577624553673414151572104508506867106149016896437686225887156020154358457485;

	nodes[24] 	= -3.1268108983731297034979413918055929447992033344523905021690771356041395716029717648107881844976429620495903407747700626316621062;
	weights[24] 	= 0.0000144964441911296747532046022967593417995807245568937788513967196656807990214199283970159595636256625344506531227934;

	nodes[25] 	= 3.1268108983731297034979413918055929447992033344523905021690771356041395716029717648107881844976429620495903407747700626316621062;
	weights[25] 	= 0.0000144964441911296747532046022967593417995807245568937788513967196656807990214199283970159595636256625344506531227934;

	nodes[26] 	= -3.3829763625124017841931900637477952327418999045063680395043392771074592968987544048331700369629473466509978197694842694869427786;
	weights[26] 	= 2.7507246274012433266026310044252089676704734270681694427823480730811793230441053192008914405397895103970679742753e-6;

	nodes[27] 	= 3.3829763625124017841931900637477952327418999045063680395043392771074592968987544048331700369629473466509978197694842694869427786;
	weights[27] 	= 2.7507246274012433266026310044252089676704734270681694427823480730811793230441053192008914405397895103970679742753e-6;

	nodes[28] 	= -3.6406352232272089175901151213688595146350881379981834806079316701499827683990395462250697768988049427043968600412192789930149789;
	weights[28] 	= 4.530535565861302027638567701734749019266047741071854642162786109417115779415092345870396984236492993273286337953e-7;

	nodes[29] 	= 3.6406352232272089175901151213688595146350881379981834806079316701499827683990395462250697768988049427043968600412192789930149789;
	weights[29] 	= 4.530535565861302027638567701734749019266047741071854642162786109417115779415092345870396984236492993273286337953e-7;

	nodes[30] 	= -3.8999408693873891946211561671746036844492365973137905326989544218907453010494778660150951857856265387246520907167703849204202612;
	weights[30] 	= 6.4544629501196395813413413094982265663129038986010929136427340539670091573490476277357245432479884261570945896e-8;

	nodes[31] 	= 3.8999408693873891946211561671746036844492365973137905326989544218907453010494778660150951857856265387246520907167703849204202612;
	weights[31] 	= 6.4544629501196395813413413094982265663129038986010929136427340539670091573490476277357245432479884261570945896e-8;

	nodes[32] 	= -4.1610582741258366678717285431930803791771097294211994976919367725614898281820237407924568792816231674441150451289220596873387839;
	weights[32] 	= 7.9229232891502558469674777136235954258373595991756991295743379130197464748372124010466348556734923396403519213e-9;

	nodes[33] 	= 4.1610582741258366678717285431930803791771097294211994976919367725614898281820237407924568792816231674441150451289220596873387839;
	weights[33] 	= 7.9229232891502558469674777136235954258373595991756991295743379130197464748372124010466348556734923396403519213e-9;

	nodes[34] 	= -4.4241658477651842945345955362294882045507205008219381547399573067353088543323025926669941779524619306803262950391904136275347861;
	weights[34] 	= 8.3430559260867113091843414988991475622579618154780570405277137687786672842910807847983978065693471423068121108e-10;

	nodes[35] 	= 4.4241658477651842945345955362294882045507205008219381547399573067353088543323025926669941779524619306803262950391904136275347861;
	weights[35] 	= 8.3430559260867113091843414988991475622579618154780570405277137687786672842910807847983978065693471423068121108e-10;

	nodes[36] 	= -4.6894576329528134920721090877419611715108993826734744942878310536287959243807627471882806639501036194495741028405319562920298859;
	weights[36] 	= 7.499719914658274302680823980242880169697216819174915082723910892872145512602075186103137202065319662903525894e-11;

	nodes[37] 	= 4.6894576329528134920721090877419611715108993826734744942878310536287959243807627471882806639501036194495741028405319562920298859;
	weights[37] 	= 7.499719914658274302680823980242880169697216819174915082723910892872145512602075186103137202065319662903525894e-11;

	nodes[38] 	= -4.9571459285134283650655124768475772179280373868576681958565383432858066436338191367781340205476927662642415527907686061526436911;
	weights[38] 	= 5.723279718502006700639482516014224971666631739821853212389591058060371315300220176714906480907531950101404844e-12;

	nodes[39] 	= 4.9571459285134283650655124768475772179280373868576681958565383432858066436338191367781340205476927662642415527907686061526436911;
	weights[39] 	= 5.723279718502006700639482516014224971666631739821853212389591058060371315300220176714906480907531950101404844e-12;

	nodes[40] 	= -5.2274644551006763059183361925767424134927842944114785039387868933467904728765686642905565206634032130116272334702316876972685144;
	weights[40] 	= 3.684849820159120687658132758325058833800486420633505293574930936634334085899074858493516983001752053780849663e-13;

	nodes[41] 	= 5.2274644551006763059183361925767424134927842944114785039387868933467904728765686642905565206634032130116272334702316876972685144;
	weights[41] 	= 3.684849820159120687658132758325058833800486420633505293574930936634334085899074858493516983001752053780849663e-13;

	nodes[42] 	= -5.5006722123151567189882161493918515156872811119030805497748645361903511940093924894286073094490957370277813451125007614332078934;
	weights[42] 	= 1.987520834698480637560711990060311912859346084891693097450531575784713878471980154664647549481992339482946894e-14;

	nodes[43] 	= 5.5006722123151567189882161493918515156872811119030805497748645361903511940093924894286073094490957370277813451125007614332078934;
	weights[43] 	= 1.987520834698480637560711990060311912859346084891693097450531575784713878471980154664647549481992339482946894e-14;

	nodes[44] 	= -5.7770582280615697085371666235039705551458079517454708845494451090828300657919271398352840976651660029352329601063266387458318091;
	weights[44] 	= 8.90946104066621672759910172322451534248013050844081158715716085257004280916347482371681441939280536475041791e-16;

	nodes[45] 	= 5.7770582280615697085371666235039705551458079517454708845494451090828300657919271398352840976651660029352329601063266387458318091;
	weights[45] 	= 8.90946104066621672759910172322451534248013050844081158715716085257004280916347482371681441939280536475041791e-16;

	nodes[46] 	= -6.056947473451028227628683129855074877986182471869069137583881061033260607857931624359403266656170816518987745080772086021274333;
	weights[46] 	= 3.2891620143645742233976636069202847446381712887730382375161301370552911637348785884136942433088601215237085e-17;

	nodes[47] 	= 6.056947473451028227628683129855074877986182471869069137583881061033260607857931624359403266656170816518987745080772086021274333;
	weights[47] 	= 3.2891620143645742233976636069202847446381712887730382375161301370552911637348785884136942433088601215237085e-17;

	nodes[48] 	= -6.3407083213299852117979246478843113206960564876028026944981361817481642879664936656805371078265892833336683916605777766479271187;
	weights[48] 	= 9.8965289896200989109162511835920382511406276456607102072560247213981326205026613170856959731035424350312216e-19;

	nodes[49] 	= 6.3407083213299852117979246478843113206960564876028026944981361817481642879664936656805371078265892833336683916605777766479271187;
	weights[49] 	= 9.8965289896200989109162511835920382511406276456607102072560247213981326205026613170856959731035424350312216e-19;

	nodes[50] 	= -6.6287620808576004536573988334363102318011285302511775135217809503484015705465483245171937025075440507066345964274491723644831879;
	weights[50] 	= 2.39784027561789128302001236820987776267820717715692903001259195941323946466700755292264018490110324644203393e-20;

	nodes[51] 	= 6.6287620808576004536573988334363102318011285302511775135217809503484015705465483245171937025075440507066345964274491723644831879;
	weights[51] 	= 2.39784027561789128302001236820987776267820717715692903001259195941323946466700755292264018490110324644203393e-20;

	nodes[52] 	= -6.9215953729258183010650909138679428697950215408972179668215461543700904662423574711508845340030580339875617404071245771996391843;
	weights[52] 	= 4.6134710745539323119269776248679476395903717850642611725434175017712544007167373976327829525729282609397446e-22;

	nodes[53] 	= 6.9215953729258183010650909138679428697950215408972179668215461543700904662423574711508845340030580339875617404071245771996391843;
	weights[53] 	= 4.6134710745539323119269776248679476395903717850642611725434175017712544007167373976327829525729282609397446e-22;

	nodes[54] 	= -7.21977646975892472157277851917872164911281666803769054935496545577876207071746104586342339109646943883499940122158030322313924;
	weights[54] 	= 6.9341198195288796130023553888640567766622501003282620274260834699481470348730923519175025713275506101137105e-24;

	nodes[55] 	= 7.21977646975892472157277851917872164911281666803769054935496545577876207071746104586342339109646943883499940122158030322313924;
	weights[55] 	= 6.9341198195288796130023553888640567766622501003282620274260834699481470348730923519175025713275506101137105e-24;

	nodes[56] 	= -7.523977290806867760422099608228066361342926743146338123583688675572494401624740253022661719386991384109996260805390276773783955;
	weights[56] 	= 7.9851871981731725141238828666373121090341801646749838372250917380696766741661340435931340720009216869366503e-26;

	nodes[57] 	= 7.523977290806867760422099608228066361342926743146338123583688675572494401624740253022661719386991384109996260805390276773783955;
	weights[57] 	= 7.9851871981731725141238828666373121090341801646749838372250917380696766741661340435931340720009216869366503e-26;

	nodes[58] 	= -7.835003678329289171234353146544382996520131590461294604366937912373835968258004094287710263511146017803065771114935337623354256;
	weights[58] 	= 6.8834570436337534423895111873754678455410737459815624600181870154634111133748987115648502894860114238665528e-28;

	nodes[59] 	= 7.835003678329289171234353146544382996520131590461294604366937912373835968258004094287710263511146017803065771114935337623354256;
	weights[59] 	= 6.8834570436337534423895111873754678455410737459815624600181870154634111133748987115648502894860114238665528e-28;

	nodes[60] 	= -8.1538381574634572787786970255475182151829806772993816744346009079162042093569102873136301520234410071457079992762676245668187249;
	weights[60] 	= 4.3178173430219709494430702968754964259952584469340249666574307657838618844895469539785212380588175895454775e-30;

	nodes[61] 	= 8.1538381574634572787786970255475182151829806772993816744346009079162042093569102873136301520234410071457079992762676245668187249;
	weights[61] 	= 4.3178173430219709494430702968754964259952584469340249666574307657838618844895469539785212380588175895454775e-30;

	nodes[62] 	= -8.4817021873215745282096451441346517966407304089139608426489427071421684234452237497728963328710348112448529749055606738526488905;
	weights[62] 	= 1.90299061003191618403010410233395021507779817459088944537896073339603569131516370414424831893497432493756765e-32;

	nodes[63] 	= 8.4817021873215745282096451441346517966407304089139608426489427071421684234452237497728963328710348112448529749055606738526488905;
	weights[63] 	= 1.90299061003191618403010410233395021507779817459088944537896073339603569131516370414424831893497432493756765e-32;

	nodes[64] 	= -8.8201501286610528430495873001635944714640219282802467818488996439843553777302241842687131415080065292402587320990054941041063177;
	weights[64] 	= 5.63719277947724972329004177396734980219074179276465864553793216638202753465959599880825026914339821700772967e-35;

	nodes[65] 	= 8.8201501286610528430495873001635944714640219282802467818488996439843553777302241842687131415080065292402587320990054941041063177;
	weights[65] 	= 5.63719277947724972329004177396734980219074179276465864553793216638202753465959599880825026914339821700772967e-35;

	nodes[66] 	= -9.1712174787264825904417117656726876653816187172057007021497395591174351433412242151090484207552276124617550616876943670744546157;
	weights[66] 	= 1.059514692827752886497228593705763758083604299689406139299558967732428953554332259849450583576723541201407923e-37;

	nodes[67] 	= 9.1712174787264825904417117656726876653816187172057007021497395591174351433412242151090484207552276124617550616876943670744546157;
	weights[67] 	= 1.059514692827752886497228593705763758083604299689406139299558967732428953554332259849450583576723541201407923e-37;

	nodes[68] 	= -9.5376679163020612483964681423858601702164538538960021304942287573472175518260839775455639782014718464751115488482769164373285106;
	weights[68] 	= 1.16920769981974675686301954184027574325988305140198725292008739772208746180229488707829856080329920747045446e-40;

	nodes[69] 	= 9.5376679163020612483964681423858601702164538538960021304942287573472175518260839775455639782014718464751115488482769164373285106;
	weights[69] 	= 1.16920769981974675686301954184027574325988305140198725292008739772208746180229488707829856080329920747045446e-40;

	nodes[70] 	= -9.923435114569243623848921288644192043952958685542489445239333741260898522014767197484602087764628510129671810657184165540872734;
	weights[70] 	= 6.792433016154534651934863296948773235055336635466803440014458564653725770646637965924396159357745147100231702e-44;

	nodes[71] 	= 9.923435114569243623848921288644192043952958685542489445239333741260898522014767197484602087764628510129671810657184165540872734;
	weights[71] 	= 6.792433016154534651934863296948773235055336635466803440014458564653725770646637965924396159357745147100231702e-44;

	nodes[72] 	= -10.334491039538370891576863776414070445487467403029934316451417290933717593289248981996224873101510704883550880478949972602814155;
	weights[72] 	= 1.7642057043388967726258211354937258966513563668800599617453476447046917613370278056129927600112730223849083684e-47;

	nodes[73] 	= 10.334491039538370891576863776414070445487467403029934316451417290933717593289248981996224873101510704883550880478949972602814155;
	weights[73] 	= 1.7642057043388967726258211354937258966513563668800599617453476447046917613370278056129927600112730223849083684e-47;

	nodes[74] 	= -10.78079647246915391688973656106029538985254460896437051204814957089082436838626554237265815443215865124871075112765844030615036;
	weights[74] 	= 1.56715649377494629062562962453873245077844829773984077606867177276140965355724887402245353282446890559649106055e-51;

	nodes[75] 	= 10.78079647246915391688973656106029538985254460896437051204814957089082436838626554237265815443215865124871075112765844030615036;
	weights[75] 	= 1.56715649377494629062562962453873245077844829773984077606867177276140965355724887402245353282446890559649106055e-51;

	nodes[76] 	= -11.281694164989270439247565251074311778540638180031996775402540223898026439947049444997700941061695854331037696240155326251345594;
	weights[76] 	= 2.862184585732787921053182810910808309039537715772413199472815143152233943846927460399901524296682683305606127123e-56;

	nodes[77] 	= 11.281694164989270439247565251074311778540638180031996775402540223898026439947049444997700941061695854331037696240155326251345594;
	weights[77] 	= 2.862184585732787921053182810910808309039537715772413199472815143152233943846927460399901524296682683305606127123e-56;

	nodes[78] 	= -11.887863560471147910127695035412614329222070782892344133662571434641306054044336720332371116885605396203804709842292243439452015;
	weights[78] 	= 2.95577460329819171985311307020801433298261373968850135143802524711750296264631651442508114215590300938609786741107e-62;

	nodes[79] 	= 11.887863560471147910127695035412614329222070782892344133662571434641306054044336720332371116885605396203804709842292243439452015;
	weights[79] 	= 2.95577460329819171985311307020801433298261373968850135143802524711750296264631651442508114215590300938609786741107e-62;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_80_hpp__)*/