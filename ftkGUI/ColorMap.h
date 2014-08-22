#ifndef COLORMAP_H
#define COLORMAP_H

#define COLOR_MAP_SIZE 128
#define COLOR_MAP2_SIZE 32

typedef struct srgb
{
	srgb( double rv, double gv, double bv)
	{
		r = rv;
		g = gv;
		b = bv;
	};
	double r;
	double g;
	double b;
}rgb;

const static rgb COLORMAP[COLOR_MAP_SIZE] = {rgb(0.0000, 0.0000, 0.5313),rgb(0.0000, 0.0000, 0.5625),rgb(0.0000, 0.0000, 0.5938),
rgb(0.0000, 0.0000, 0.6250),rgb(0.0000, 0.0000, 0.6563),rgb(0.0000, 0.0000, 0.6875),rgb(0.0000, 0.0000, 0.7188),
rgb(0.0000, 0.0000, 0.7500),rgb(0.0000, 0.0000, 0.7813),rgb(0.0000, 0.0000, 0.8125),rgb(0.0000, 0.0000, 0.8438),
rgb(0.0000, 0.0000, 0.8750),rgb(0.0000, 0.0000, 0.9063),rgb(0.0000, 0.0000, 0.9375),rgb(0.0000, 0.0000, 0.9688),
rgb(0.0000, 0.0000, 1.0000),rgb(0.0000, 0.0313, 1.0000),rgb(0.0000, 0.0625, 1.0000),rgb(0.0000, 0.0938, 1.0000),
rgb(0.0000, 0.1250, 1.0000),rgb(0.0000, 0.1563, 1.0000),rgb(0.0000, 0.1875, 1.0000),rgb(0.0000, 0.2188, 1.0000),
rgb(0.0000, 0.2500, 1.0000),rgb(0.0000, 0.2813, 1.0000),rgb(0.0000, 0.3125, 1.0000),rgb(0.0000, 0.3438, 1.0000),
rgb(0.0000, 0.3750, 1.0000),rgb(0.0000, 0.4063, 1.0000),rgb(0.0000, 0.4375, 1.0000),rgb(0.0000, 0.4688, 1.0000),
rgb(0.0000, 0.5000, 1.0000),rgb(0.0000, 0.5313, 1.0000),rgb(0.0000, 0.5625, 1.0000),rgb(0.0000, 0.5938, 1.0000),
rgb(0.0000, 0.6250, 1.0000),rgb(0.0000, 0.6563, 1.0000),rgb(0.0000, 0.6875, 1.0000),rgb(0.0000, 0.7188, 1.0000),
rgb(0.0000, 0.7500, 1.0000),rgb(0.0000, 0.7813, 1.0000),rgb(0.0000, 0.8125, 1.0000),rgb(0.0000, 0.8438, 1.0000),
rgb(0.0000, 0.8750, 1.0000),rgb(0.0000, 0.9063, 1.0000),rgb(0.0000, 0.9375, 1.0000),rgb(0.0000, 0.9688, 1.0000),
rgb(0.0000, 1.0000, 1.0000),rgb(0.0313, 1.0000, 0.9688),rgb(0.0625, 1.0000, 0.9375),rgb(0.0938, 1.0000, 0.9063),
rgb(0.1250, 1.0000, 0.8750),rgb(0.1563, 1.0000, 0.8438),rgb(0.1875, 1.0000, 0.8125),rgb(0.2188, 1.0000, 0.7813),
rgb(0.2500, 1.0000, 0.7500),rgb(0.2813, 1.0000, 0.7188),rgb(0.3125, 1.0000, 0.6875),rgb(0.3438, 1.0000, 0.6563),
rgb(0.3750, 1.0000, 0.6250),rgb(0.4063, 1.0000, 0.5938),rgb(0.4375, 1.0000, 0.5625),rgb(0.4688, 1.0000, 0.5313),
rgb(0.5000, 1.0000, 0.5000),rgb(0.5313, 1.0000, 0.4688),rgb(0.5625, 1.0000, 0.4375),rgb(0.5938, 1.0000, 0.4063),
rgb(0.6250, 1.0000, 0.3750),rgb(0.6563, 1.0000, 0.3438),rgb(0.6875, 1.0000, 0.3125),rgb(0.7188, 1.0000, 0.2813),
rgb(0.7500, 1.0000, 0.2500),rgb(0.7813, 1.0000, 0.2188),rgb(0.8125, 1.0000, 0.1875),rgb(0.8438, 1.0000, 0.1563),
rgb(0.8750, 1.0000, 0.1250),rgb(0.9063, 1.0000, 0.0938),rgb(0.9375, 1.0000, 0.0625),rgb(0.9688, 1.0000, 0.0313),
rgb(1.0000, 1.0000, 0.0000),rgb(1.0000, 0.9688, 0.0000),rgb(1.0000, 0.9375, 0.0000),rgb(1.0000, 0.9063, 0.0000),
rgb(1.0000, 0.8750, 0.0000),rgb(1.0000, 0.8438, 0.0000),rgb(1.0000, 0.8125, 0.0000),rgb(1.0000, 0.7813, 0.0000),
rgb(1.0000, 0.7500, 0.0000),rgb(1.0000, 0.7188, 0.0000),rgb(1.0000, 0.6875, 0.0000),rgb(1.0000, 0.6563, 0.0000),
rgb(1.0000, 0.6250, 0.0000),rgb(1.0000, 0.5938, 0.0000),rgb(1.0000, 0.5625, 0.0000),rgb(1.0000, 0.5313, 0.0000),
rgb(1.0000, 0.5000, 0.0000),rgb(1.0000, 0.4688, 0.0000),rgb(1.0000, 0.4375, 0.0000),rgb(1.0000, 0.4063, 0.0000),
rgb(1.0000, 0.3750, 0.0000),rgb(1.0000, 0.3438, 0.0000),rgb(1.0000, 0.3125, 0.0000),rgb(1.0000, 0.2813, 0.0000),
rgb(1.0000, 0.2500, 0.0000),rgb(1.0000, 0.2188, 0.0000),rgb(1.0000, 0.1875, 0.0000),rgb(1.0000, 0.1563, 0.0000),
rgb(1.0000, 0.1250, 0.0000),rgb(1.0000, 0.0938, 0.0000),rgb(1.0000, 0.0625, 0.0000),rgb(1.0000, 0.0313, 0.0000),
rgb(1.0000, 0.0000, 0.0000),rgb(0.9688, 0.0000, 0.0000),rgb(0.9375, 0.0000, 0.0000),rgb(0.9063, 0.0000, 0.0000),
rgb(0.8750, 0.0000, 0.0000),rgb(0.8438, 0.0000, 0.0000),rgb(0.8125, 0.0000, 0.0000),rgb(0.7813, 0.0000, 0.0000),
rgb(0.7500, 0.0000, 0.0000),rgb(0.7188, 0.0000, 0.0000),rgb(0.6875, 0.0000, 0.0000),rgb(0.6563, 0.0000, 0.0000),
rgb(0.6250, 0.0000, 0.0000),rgb(0.5938, 0.0000, 0.0000),rgb(0.5625, 0.0000, 0.0000),rgb(0.5313, 0.0000, 0.0000),
rgb(0.5000, 0.0000, 0.0000)};

const static rgb COLORMAP_GREY[COLOR_MAP_SIZE] = {rgb(0.000000,0.000000,0.000000),rgb(0.007874,0.007874,0.007874),rgb(0.015748,0.015748,0.015748),rgb(0.023622,0.023622,0.023622),
rgb(0.031496,0.031496,0.031496),rgb(0.039370,0.039370,0.039370),rgb(0.047244,0.047244,0.047244),rgb(0.055118,0.055118,0.055118),
rgb(0.062992,0.062992,0.062992),rgb(0.070866,0.070866,0.070866),rgb(0.078740,0.078740,0.078740),rgb(0.086614,0.086614,0.086614),
rgb(0.094488,0.094488,0.094488),rgb(0.102362,0.102362,0.102362),rgb(0.110236,0.110236,0.110236),rgb(0.118110,0.118110,0.118110),
rgb(0.125984,0.125984,0.125984),rgb(0.133858,0.133858,0.133858),rgb(0.141732,0.141732,0.141732),rgb(0.149606,0.149606,0.149606),
rgb(0.157480,0.157480,0.157480),rgb(0.165354,0.165354,0.165354),rgb(0.173228,0.173228,0.173228),rgb(0.181102,0.181102,0.181102),
rgb(0.188976,0.188976,0.188976),rgb(0.196850,0.196850,0.196850),rgb(0.204724,0.204724,0.204724),rgb(0.212598,0.212598,0.212598),
rgb(0.220472,0.220472,0.220472),rgb(0.228346,0.228346,0.228346),rgb(0.236220,0.236220,0.236220),rgb(0.244094,0.244094,0.244094),
rgb(0.251969,0.251969,0.251969),rgb(0.259843,0.259843,0.259843),rgb(0.267717,0.267717,0.267717),rgb(0.275591,0.275591,0.275591),
rgb(0.283465,0.283465,0.283465),rgb(0.291339,0.291339,0.291339),rgb(0.299213,0.299213,0.299213),rgb(0.307087,0.307087,0.307087),
rgb(0.314961,0.314961,0.314961),rgb(0.322835,0.322835,0.322835),rgb(0.330709,0.330709,0.330709),rgb(0.338583,0.338583,0.338583),
rgb(0.346457,0.346457,0.346457),rgb(0.354331,0.354331,0.354331),rgb(0.362205,0.362205,0.362205),rgb(0.370079,0.370079,0.370079),
rgb(0.377953,0.377953,0.377953),rgb(0.385827,0.385827,0.385827),rgb(0.393701,0.393701,0.393701),rgb(0.401575,0.401575,0.401575),
rgb(0.409449,0.409449,0.409449),rgb(0.417323,0.417323,0.417323),rgb(0.425197,0.425197,0.425197),rgb(0.433071,0.433071,0.433071),
rgb(0.440945,0.440945,0.440945),rgb(0.448819,0.448819,0.448819),rgb(0.456693,0.456693,0.456693),rgb(0.464567,0.464567,0.464567),
rgb(0.472441,0.472441,0.472441),rgb(0.480315,0.480315,0.480315),rgb(0.488189,0.488189,0.488189),rgb(0.496063,0.496063,0.496063),
rgb(0.503937,0.503937,0.503937),rgb(0.511811,0.511811,0.511811),rgb(0.519685,0.519685,0.519685),rgb(0.527559,0.527559,0.527559),
rgb(0.535433,0.535433,0.535433),rgb(0.543307,0.543307,0.543307),rgb(0.551181,0.551181,0.551181),rgb(0.559055,0.559055,0.559055),
rgb(0.566929,0.566929,0.566929),rgb(0.574803,0.574803,0.574803),rgb(0.582677,0.582677,0.582677),rgb(0.590551,0.590551,0.590551),
rgb(0.598425,0.598425,0.598425),rgb(0.606299,0.606299,0.606299),rgb(0.614173,0.614173,0.614173),rgb(0.622047,0.622047,0.622047),
rgb(0.629921,0.629921,0.629921),rgb(0.637795,0.637795,0.637795),rgb(0.645669,0.645669,0.645669),rgb(0.653543,0.653543,0.653543),
rgb(0.661417,0.661417,0.661417),rgb(0.669291,0.669291,0.669291),rgb(0.677165,0.677165,0.677165),rgb(0.685039,0.685039,0.685039),
rgb(0.692913,0.692913,0.692913),rgb(0.700787,0.700787,0.700787),rgb(0.708661,0.708661,0.708661),rgb(0.716535,0.716535,0.716535),
rgb(0.724409,0.724409,0.724409),rgb(0.732283,0.732283,0.732283),rgb(0.740157,0.740157,0.740157),rgb(0.748031,0.748031,0.748031),
rgb(0.755906,0.755906,0.755906),rgb(0.763780,0.763780,0.763780),rgb(0.771654,0.771654,0.771654),rgb(0.779528,0.779528,0.779528),
rgb(0.787402,0.787402,0.787402),rgb(0.795276,0.795276,0.795276),rgb(0.803150,0.803150,0.803150),rgb(0.811024,0.811024,0.811024),
rgb(0.818898,0.818898,0.818898),rgb(0.826772,0.826772,0.826772),rgb(0.834646,0.834646,0.834646),rgb(0.842520,0.842520,0.842520),
rgb(0.850394,0.850394,0.850394),rgb(0.858268,0.858268,0.858268),rgb(0.866142,0.866142,0.866142),rgb(0.874016,0.874016,0.874016),
rgb(0.881890,0.881890,0.881890),rgb(0.889764,0.889764,0.889764),rgb(0.897638,0.897638,0.897638),rgb(0.905512,0.905512,0.905512),
rgb(0.913386,0.913386,0.913386),rgb(0.921260,0.921260,0.921260),rgb(0.929134,0.929134,0.929134),rgb(0.937008,0.937008,0.937008),
rgb(0.944882,0.944882,0.944882),rgb(0.952756,0.952756,0.952756),rgb(0.960630,0.960630,0.960630),rgb(0.968504,0.968504,0.968504),
rgb(0.976378,0.976378,0.976378),rgb(0.984252,0.984252,0.984252),rgb(0.992126,0.992126,0.992126),rgb(1.000000,1.000000,1.000000)};

const static rgb COLORMAP2[COLOR_MAP2_SIZE] = {rgb(1.0000, 1.0000, 0.0000),rgb(1.0000, 0.9677, 0.0000),rgb(1.0000, 0.9355, 0.0000),
rgb(1.0000, 0.9032, 0.0000),rgb(1.0000, 0.8710, 0.0000),rgb(1.0000, 0.8387, 0.0000),rgb(1.0000, 0.8065, 0.0000),rgb(1.0000, 0.7742, 0.0000),
rgb(1.0000, 0.7419, 0.0000),rgb(1.0000, 0.7097, 0.0000),rgb(1.0000, 0.6774, 0.0000),rgb(1.0000, 0.6452, 0.0000),rgb(1.0000, 0.6129, 0.0000),
rgb(1.0000, 0.5806, 0.0000),rgb(1.0000, 0.5484, 0.0000),rgb(1.0000, 0.5161, 0.0000),rgb(1.0000, 0.4839, 0.0000),rgb(1.0000, 0.4516, 0.0000),
rgb(1.0000, 0.4194, 0.0000),rgb(1.0000, 0.3871, 0.0000),rgb(1.0000, 0.3548, 0.0000),rgb(1.0000, 0.3226, 0.0000),rgb(1.0000, 0.2903, 0.0000),
rgb(1.0000, 0.2581, 0.0000),rgb(1.0000, 0.2258, 0.0000),rgb(1.0000, 0.1935, 0.0000),rgb(1.0000, 0.1613, 0.0000),rgb(1.0000, 0.1290, 0.0000),
rgb(1.0000, 0.0968, 0.0000),rgb(1.0000, 0.0645, 0.0000),rgb(1.0000, 0.0323, 0.0000),rgb(1.0000, 0.0000, 0.0000)};
#endif