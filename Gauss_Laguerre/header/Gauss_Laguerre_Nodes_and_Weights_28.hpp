//
//        Gauss_Laguerre_Nodes_and_Weights_28.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:34.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 28.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_28_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_28_hpp__

void Gauss_Laguerre_Nodes_and_Weights_28(long double*& nodes, long double*& weights) {
	nodes	= new long double[28];
	weights	= new long double[28];

	nodes[0] 	= 0.050734624849873887592907549775698719672826587494975024907443051613380233801690448260100627826899636606923997777863888763975211172;
	weights[0] 	= 0.123778843954286426614721427540619736044369359806123692541502050255002813142456888330493504643888393890241125270921543028412031;

	nodes[1] 	= 0.26748726864074108428933027848280409194150933693114550262946362882487687809375721065791691011234959016950588831858914756446103935;
	weights[1] 	= 0.2322792769009011614466887556892503598541231237970586851567529175831043754584458457393091112276366164814319926364273836731368;

	nodes[2] 	= 0.65813662835479151933283447127540367935563353407977981772764288899546713015925045586769466024419665924879519697971765563264251745;
	weights[2] 	= 0.247511896036477211866270259311090422087200829280515989953491052370388986058582389375884203298175229962126934464623150731583;

	nodes[3] 	= 1.2239718083849077186912522851056213705560061509174822474635620434243915394891317893630210094258831241562742915228579086264576493;
	weights[3] 	= 0.19230711313238282667242009721315280734472829510451805386255506600793116834017665768517337990099999836632978307207576393643;

	nodes[4] 	= 1.9667676124737776997954894733933185182161769470713913046566278194574370841446234811803101728695127446464135735570023288741072491;
	weights[4] 	= 0.1164053617211300064567199452865447680290312715619980387757490641970837523413044239776674203820539666025342713022912253082;

	nodes[5] 	= 2.8888833260303218929267550671533750994515737309652646876695039975822492920172862787061738665581922621551753408721328432919450131;
	weights[5] 	= 0.0563459053644773065174025386900719595343780415793722536185727612662536010207307801984382136378574114437393590723964182879;

	nodes[6] 	= 3.9933116592501141361588518243933259168411090107247818046170420104082470398200111474762248654857807541428864737072587320748258905;
	weights[6] 	= 0.022066364326258807858126332392734996437357677355357891139813106211261490932454596787094129390212778469015178709054959451;

	nodes[7] 	= 5.2837360628434425628039393586845536427350123290636633237145787691760041312347721310973640943706954512169874561875442243229169855;
	weights[7] 	= 0.007025887635583867733142438354770828843895811450299271569705908673921293627816631706745646811654435926527543158491175683;

	nodes[8] 	= 6.7646034042435051551697476010460185554530334516539183783211501061310905333619697002679311472029868014434987661463215353369096804;
	weights[8] 	= 0.00182060789269585486747486833559332827196364317657093343942949986617963452816526602188698969395755509065549431420345929;

	nodes[9] 	= 8.4412163282713244885843285588690555105351157044808927572967299694179867583865616554510809420983619223229159625848065962181214039;
	weights[9] 	= 0.00038334430385712317659583517836535796273138031004019748942047634084718115453833784672957466178359600059435328369608088;

	nodes[10] 	= 10.319850462993260103906290960609552046292991337425383866789985859429151387306131944292360064752027616323544839659859982920874531;
	weights[10] 	= 0.00006535087080694398307920225180712343291470742475772893668169254065465893080522188343629420855557326170690628352341062;

	nodes[11] 	= 12.407903414460671738667552524969805354230233637562965569395023640278998447248635922202591325830580386681135982518459465017239913;
	weights[11] 	= 8.971362053410768344272561591255422761158952808389823799286627509220932773515356033613076787613127109008346363172559e-6;

	nodes[12] 	= 14.714085164135748813295321544992488644268670028568616109779960344003735169683955533432395336967481758902368319046335038837941933;
	weights[12] 	= 9.84701225624928886998202329639969186773976068410968055317972574344578958177775252427558859231484146409558273572204e-7;

	nodes[13] 	= 17.248663415608056266457823820669610364407868990328489984725606703981430894842006235520519427193917342642374344635011800277095601;
	weights[13] 	= 8.56407585267304244620242496834130339030345018021166456402302332454721877821665394728761305959860606589716035543071e-8;

	nodes[14] 	= 20.023783329951712750676862265476834702515932881547874500864423689260438450464437752941943268896533251740201263516087035703446369;
	weights[14] 	= 5.8368387631383442906576443861828102909596980501297450882332668046688559133463659863871755582613527188335718199825e-9;

	nodes[15] 	= 23.053890135030295970452034361020677754724698059296443199914734930704501627703690497790453038464895436920070628197021176028556576;
	weights[15] 	= 3.0756388778423022836060598055423737405031020420920900877661552772787177340193789593381906786934982467421754897636e-10;

	nodes[16] 	= 26.356297374401317619613203322869826095312269183710631283429631760711065544274641636904231789484713296679425297572923425589018908;
	weights[16] 	= 1.2325909527244228201547291863054758952446029336790834028741272629940492759317747092557777722346142193248510505204e-11;

	nodes[17] 	= 29.951966833596182108770744837775251496756463589933320716260656447652028485061367122494359137399146487104084828442902255133923771;
	weights[17] 	= 3.6821736741083120028319604735801679672449297672078865036927531100031021327108650223558717622693721715534142295996e-13;

	nodes[18] 	= 33.866605516584459211696175967258839899227179281599312674906154901131101147263209077008156049700692073673667457945751434595579635;
	weights[18] 	= 7.998790575968909652490083447686912334033341722199156837409315838799954134060580552740859744799407449927331012552e-15;

	nodes[19] 	= 38.13225441019464677889956002199211535550021730013778335895221296463687793370688931686329223484889260239474721425934408417955788;
	weights[19] 	= 1.2249225003240834109164374343064203443594675186170784895912117184793117405544878580588259909182184598574728075446e-16;

	nodes[20] 	= 42.789672370772576270077087846169058248193685855789287651334598745884407355475269385732649746631089250956301988658509926511147316;
	weights[20] 	= 1.2711242950306737362817350074685328792868918305969698967652858491218520920443610652471777499700311533502641155047e-18;

	nodes[21] 	= 47.892071633622743673352348036686449969083835952696509346965677286065306236007610782122590100728171079172390815316504683383912753;
	weights[21] 	= 8.488593367686543199577104553983478231095863017620037432613108028483298107261064173864475356363538454365518168757e-21;

	nodes[22] 	= 53.511297959664294205434559257831571241446729408993560678167397074664294164058501550677620062721624904062425977457081948119404278;
	weights[22] 	= 3.4024553794255118472730731126669467946598129904919320553413275640526631775659594906715506021804787105255815817803e-23;

	nodes[23] 	= 59.748796084641240821965883279472259346652751048787229334759157936110044440280383006859880413750385721329842095205617349375668334;
	weights[23] 	= 7.4201565888674851323578450926848429479955161536758968723604257263713427925415247126214885691846524854459749170014e-26;

	nodes[24] 	= 66.756977283906469553713855986529650347473314378125572792248450637156389925090493482993774898487447447275167857327501230502503076;
	weights[24] 	= 7.6004132058017376938126058257171349008167317138393869188455762023398986928780072172254078648294970766864533346765e-29;

	nodes[25] 	= 74.786778152339161834877827203063135227423037311660659398007263004856145438967680782492970913953979369796355551756310678332886137;
	weights[25] 	= 2.873910317940395814310793624461037476629420400831059562831669339612537811689984741699804330340982941491707891578179e-32;

	nodes[26] 	= 84.317837107227043055543085298823924930191474196946414287593039402753960060288631900848804010425651970550075388189807089157164478;
	weights[26] 	= 2.541822903889318004299496161641191827157943934063090501260730953668472102377724036794081150522624898187368648142089e-36;

	nodes[27] 	= 96.582420627527319077254346995609773871540650773506650396902280385688992671767409770493589883567911057686443202640876535627715871;
	weights[27] 	= 1.66137587802903396104865795931559281571396657074262119686857295963259638686941507734495058770310812965244488774651495e-41;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_28_hpp__)*/