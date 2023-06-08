#ifndef SEQ_H
#define SEQ_H
/*
header 2byte
	BBBBBBBB
	BBBBBL__
		BPM*minNote 13bit
		loop 1bit
track
	0 1byte
	commands 1byte
		1LOONNNN
			note=NNNN+(O+(baseMode?1:4))*12;
			length=tick[L];
			play();

		01LTTTTT
			tick[L]=TTTTT;

		001_BVME
			baseMode=B;
			halfVolume=V;
			octPulseMode=M;
			envelope=E;

		00011111~00000010 reserved

		00000001
			break;
0 0 2byte
*/
const uint8_t famima[]={// 33bytes
	20,0,
	0,32,64,150,146,137,146,148,98,217,148,150,148,137,67,146,
	0,65,140,134,98,209,96,196,137,137,67,134,1,
	0,0
};
const uint8_t ofuro[]={// 95bytes
	30,
	0,0,64,151,149,97,212,151,160,219,151,162,224,99,228,160,155,97,217,165,162,224,219,101,224,
	0,64,140,140,128,132,132,132,130,133,97,197,132,135,135,135,132,135,135,135,133,137,137,137,135,144,135,146,144,148,148,146,208,
	0,64,140,140,140,135,135,135,140,139,97,203,156,144,144,144,156,144,144,144,156,146,146,146,156,148,156,149,148,151,151,149,212,1,
	0,0
};
// const uint8_t yobikomi[]={// 324bytes
// 	65,132,
// 	0,35,64,153,156,99,217,155,156,153,156,150,156,97,217,220,153,156,99,217,155,156,153,156,150,156,97,217,220,146,156,146,156,146,156,148,156,100,214,156,146,156,214,156,153,156,103,217,146,156,146,156,146,156,148,156,214,146,156,146,156,146,156,148,156,214,148,156,148,156,148,156,146,156,97,212,220,214,220,217,220,215,220,214,220,212,220,
// 	0,42,65,172,64,169,98,236,169,236,169,169,97,236,169,98,236,169,236,169,236,169,169,97,236,169,98,236,171,236,171,236,171,171,97,236,171,98,236,171,236,171,236,171,171,97,236,171,98,236,171,236,171,236,171,171,97,236,171,98,236,171,236,171,236,171,171,97,236,171,98,236,169,236,169,236,169,169,97,236,169,98,236,169,236,169,236,169,169,65,172,169,
// 	0,42,65,172,64,166,98,236,166,236,166,166,97,236,166,98,236,166,236,166,236,166,166,97,236,166,98,236,166,236,166,236,166,166,97,236,166,98,236,166,236,166,236,166,166,97,236,166,98,236,167,236,167,236,167,167,97,236,167,98,236,167,236,167,236,167,167,97,236,167,98,236,164,236,164,236,164,164,97,236,164,98,236,164,236,164,236,164,164,65,172,164,
// 	0,43,67,162,153,162,153,162,153,98,226,96,217,97,226,225,155,150,155,150,155,150,98,219,96,214,97,219,217,151,146,151,162,151,146,215,210,215,219,153,148,153,148,153,148,225,219,153,1,
// 	0,0
// };
// const uint8_t dw3battle[]={// 888bytes
// 	219,4,
// 	0,65,165,164,163,162,161,160,155,154,153,152,151,150,149,148,147,146,145,144,139,138,137,136,135,134,119,197,204,197,204,213,224,219,75,156,69,151,66,152,153,218,220,218,220,213,224,219,75,156,69,151,66,152,153,218,220,218,220,66,160,160,160,160,101,224,160,160,160,160,224,236,236,160,160,160,160,224,160,160,160,160,224,236,236,75,133,208,203,204,135,202,87,138,202,66,133,134,199,196,75,133,208,203,204,135,202,87,138,202,66,133,134,199,196,149,149,149,149,213,148,148,148,148,212,147,147,147,147,211,84,156,156,66,149,149,149,149,213,148,148,148,148,212,147,147,147,147,211,84,156,156,65,133,134,135,136,137,138,139,144,145,146,147,148,149,150,151,152,153,154,155,160,161,162,163,164,
// 	0,65,153,152,151,150,149,148,147,146,145,144,40,187,186,185,184,183,182,181,180,179,178,177,176,171,170,101,233,235,233,235,233,235,233,235,233,235,233,235,233,235,233,235,32,66,137,144,137,144,137,144,137,144,137,144,137,144,137,144,137,144,135,146,139,146,135,146,139,146,135,146,139,146,135,146,139,146,97,231,213,225,209,218,215,229,209,218,199,215,197,225,199,213,197,218,215,218,199,209,213,215,218,230,209,218,198,209,218,225,198,209,218,193,198,225,198,209,218,193,198,209,214,218,225,218,198,137,144,137,144,137,144,137,144,137,144,137,144,137,144,137,144,135,146,139,146,135,146,139,146,135,146,139,146,135,146,139,146,231,213,225,209,218,215,229,209,218,199,215,197,225,199,213,197,218,215,218,199,209,213,215,218,230,209,218,198,209,218,225,198,209,218,193,198,225,198,218,209,193,198,138,145,150,154,148,148,148,148,101,212,148,148,148,148,212,220,220,148,148,148,148,212,148,148,148,148,212,220,220,40,168,176,168,176,168,176,168,176,168,176,168,176,168,176,168,176,170,177,170,177,170,177,170,177,170,177,170,177,170,177,170,177,168,176,168,176,168,176,168,176,168,176,168,176,168,176,168,176,170,177,170,177,170,177,170,177,170,177,170,177,170,177,170,177,32,136,144,144,144,208,144,144,144,144,208,144,144,144,144,208,128,128,192,128,128,192,128,128,192,128,128,136,144,144,144,208,144,144,144,144,208,144,144,144,144,208,128,128,192,128,128,192,128,128,192,128,128,40,65,169,170,171,176,177,178,179,180,181,182,183,184,185,186,187,32,144,145,146,147,148,149,150,151,152,1,
// 	0,87,140,140,40,69,166,168,166,168,166,168,166,168,166,168,166,168,166,168,166,168,165,98,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,97,229,32,209,199,197,215,209,225,197,215,193,209,40,234,213,234,32,209,193,215,197,215,40,234,245,252,234,32,215,40,229,234,32,209,40,234,246,32,214,218,40,234,32,209,214,40,234,241,252,234,32,214,198,40,234,241,230,234,32,214,218,214,40,234,165,98,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,97,229,32,209,199,197,215,209,225,197,215,193,209,40,234,213,234,32,209,193,215,197,215,40,234,245,252,234,32,215,40,229,234,32,209,40,234,246,32,214,218,40,234,32,209,214,40,234,241,252,234,32,214,198,40,234,241,98,32,198,202,209,214,40,250,250,250,250,186,250,250,250,250,186,240,230,228,225,250,250,250,250,186,250,250,250,250,186,240,230,228,225,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,165,229,229,229,248,248,248,184,248,248,248,248,184,248,248,248,248,184,224,224,160,224,224,160,224,224,160,224,224,229,248,248,248,184,248,248,248,248,184,248,248,248,248,184,224,224,160,224,224,160,224,224,160,224,224,107,227,
// 	0,0
// };
#endif


