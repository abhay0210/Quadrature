//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_6.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 6.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_6_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_6_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_6(long double*& nodes, long double& weight) {
	weight 		= 0.5235987755982988730771072305465838140328615665625176368291574320513027343810348331046724708903528446636913477522137177745156408;

	nodes		= new long double[6];

	nodes[0] 	= 0.96592582628906828674974319972889736763390483900840455040234307631042321397985551634756174185807045188840211186438162153744592538;
	nodes[1] 	= 0.707106781186547524400844362104849039284835937688474036588339868995366239231053519425193767163820786367506923115456148512462418;
	nodes[2] 	= 0.2588190451025207623488988376240483283490689013199305138140032073150569747488019969223679746942496655208951887489254730249835074;
	nodes[3] 	= -0.2588190451025207623488988376240483283490689013199305138140032073150569747488019969223679746942496655208951887489254730249835074;
	nodes[4] 	= -0.707106781186547524400844362104849039284835937688474036588339868995366239231053519425193767163820786367506923115456148512462418;
	nodes[5] 	= -0.9659258262890682867497431997288973676339048390084045504023430763104232139798555163475617418580704518884021118643816215374459254;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_6_hpp__)*/