#ifndef SHEET_H
#define SHEET_H
/*
header
	14bit : BPM*minNote
	1bit : loop
	1bit : pause

body
	1bit : 音量 50%:0 100%:1
	1bit : 波形 50%:0 25%:1
	1bit : 減衰 on:0 off:1
	3bit : オクターブ(0~7) o0:000 ~ o7:111
	4bit : 音高(0~11)+休符(12) c:0000 ~ b:1011 r:1100
	6bit : 音価(min:1/16?) min*1:000000 ~ min*64:111111
*/
static const uint16_t PROGMEM yobikomi[]={
	8386,
	0,30272,30464,30275,30400,30464,30272,30464,30080,30464,30273,30465,30272,30464,30275,30400,30464,30272,30464,30080,30464,30273,30465,29824,30464,29824,30464,29824,30464,29952,30464,30084,30464,29824,30464,30084,30464,30272,30464,30279,29824,30464,29824,30464,29824,30464,29952,30464,30087,29824,30464,29824,30464,29824,30464,29952,30464,30087,29952,30464,29952,30464,29952,30464,29824,30464,29953,30465,30081,30465,30273,30465,30145,30465,30081,30465,29953,30465,
	0,20225,20032,20226,20032,20226,20032,20032,20225,20032,20226,20032,20226,20032,20226,20032,20032,20225,20032,20226,20160,20226,20160,20226,20160,20160,20225,20160,20226,20160,20226,20160,20226,20160,20160,20225,20160,20226,20160,20226,20160,20226,20160,20160,20225,20160,20226,20160,20226,20160,20226,20160,20160,20225,20160,20226,20032,20226,20032,20226,20032,20032,20225,20032,20226,20032,20226,20032,20226,20032,20032,20225,20033,
	0,20225,19840,20226,19840,20226,19840,19840,20225,19840,20226,19840,20226,19840,20226,19840,19840,20225,19840,20226,19840,20226,19840,20226,19840,19840,20225,19840,20226,19840,20226,19840,20226,19840,19840,20225,19840,20226,19904,20226,19904,20226,19904,19904,20225,19904,20226,19904,20226,19904,20226,19904,19904,20225,19904,20226,19712,20226,19712,20226,19712,19712,20225,19712,20226,19712,20226,19712,20226,19712,19712,20225,19713,
	0,27779,27203,27779,27203,27779,27203,27778,27200,27777,27713,27331,27011,27331,27011,27331,27011,27330,27008,27329,27201,27075,26755,27075,27779,27075,26755,27073,26753,27073,27329,27203,26883,27203,26883,27203,26883,27713,27329,27203,
	0,0
};
static const uint16_t PROGMEM kewpie[]={
	10753,
	0,21249,21952,21952,21953,21953,21761,21761,21827,22273,21952,21952,21953,21953,21569,21569,21635,22273,21952,21952,21959,21639,20935,22275,21953,21952,21952,21761,22273,21953,22273,21953,22273,22273,21952,21952,21825,22273,21953,22273,21953,22273,22273,21952,21952,21761,22273,21953,22273,22209,22273,22081,22273,21953,21889,21825,21761,21633,22273,22273,21952,21952,21761,22273,21953,22273,21953,22273,22273,21952,21952,21633,22273,22209,22273,22209,22273,22273,22080,22080,22081,22273,22081,22273,22657,23297,22657,22273,21955,21952,22016,22080,22144,22209,21953,22081,21953,21761,22273,21953,22273,21761,21953,22273,21953,21825,22273,21953,22273,21825,21953,22273,21953,21761,22273,21953,22273,22209,22273,22081,22273,21953,21889,21825,21761,21633,22273,22273,21952,21952,21761,22273,21953,22273,21953,22273,22273,21952,21952,21825,22273,22081,22273,22081,22273,22529,23297,22785,23297,23299,22657,23297,23299,22529,21952,22016,22080,22144,22209,22529,21249,20483,
	0,21251,21251,21569,21569,21635,22275,22275,21121,21121,21187,21251,21249,21895,21511,22273,21959,22275,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,20161,20225,20161,20225,20161,20225,20161,20225,20033,20225,20033,20225,20033,20225,20033,19907,20227,20231,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,19905,20225,20033,20225,20033,20225,20033,20225,20033,20225,19905,20225,19905,20225,19905,20225,19905,19905,20225,20227,20481,21249,19459,
	0,21251,21263,21263,21249,21249,21831,21191,21251,20935,20225,19713,20225,19713,20225,19713,20225,19713,20225,19777,20225,19777,20225,19777,20225,19777,20225,19713,20225,19713,20225,19713,20225,19713,20225,19777,20225,19777,20225,19777,20225,19777,20225,19713,20225,19713,20225,19713,20225,19713,20225,19905,20225,19905,20225,19905,20225,19905,20225,19841,20225,19841,20225,19841,20225,19841,20239,20225,19713,20225,19713,20225,19713,20225,19713,20225,19777,20225,19777,20225,19777,20225,19777,20225,19713,20225,19713,20225,19713,20225,19713,20225,19777,20225,19777,20225,19777,20225,19777,20225,19713,20225,19713,20225,19713,20225,19713,20225,19777,20225,19777,20225,19777,20225,19777,20225,19713,20225,19585,20225,19777,20225,19777,19713,20225,20227,20225,20225,18435,
	0,21251,21263,21263,21249,21249,21249,21767,21063,21249,21255,19459,18883,18435,18883,18563,18883,18563,18883,19459,18883,18435,18883,18563,18883,18563,18883,19459,18883,18435,18883,18563,18883,18563,18883,19011,18563,18819,18563,18883,19203,19207,19459,18883,19459,19459,18883,18563,18883,18883,19459,18883,19459,19459,18883,18563,18883,18883,19459,18883,19459,19459,18755,18435,18755,18755,19459,18883,18563,18883,19457,20225,20227,20227,20227,
	0,0
};
static const uint16_t PROGMEM small_world[]={
	8322,
	0,21185,21505,21635,22211,21955,22081,21953,21955,21891,21891,21057,21185,21507,22083,21891,21953,21889,21763,21635,21635,21185,21505,21635,21953,22081,22211,22081,21953,21763,22081,22209,22531,22209,22081,21635,22531,22211,22083,21959,22279,21957,21953,22211,21955,22085,22081,22087,22085,22081,22531,22083,22213,22209,22215,22213,22209,22659,22211,22533,22529,22531,22209,22081,21639,21895,21959,22275,
	0,54019,52993,52929,52993,52929,52993,52929,52993,52929,54017,53249,54017,53249,54017,53249,54017,53249,54017,53249,54017,53249,54017,53249,54017,53249,52993,52929,52993,52929,52993,52929,52993,52929,52993,52929,52993,52929,54017,53377,54017,53377,54017,53505,54017,53505,54017,53505,54017,53505,54017,53377,54017,53377,54017,53249,54017,53249,52993,52929,52993,52929,52929,52993,52993,53249,52993,52929,52993,52929,52993,52929,52993,52929,54017,53249,54017,53249,54017,53249,54017,53249,54017,53249,54017,53249,54017,53249,54017,53249,52993,52929,52993,52929,52993,52929,52993,52929,52993,52929,52993,52929,54017,53377,54017,53377,54017,53505,54017,53505,54017,53505,54017,53505,54017,53377,54017,53377,54017,53249,54017,53249,52993,52929,52993,52929,52929,52993,
	0,37635,36609,36289,36609,36289,36609,36289,36609,36289,36609,36417,36609,36417,36609,36417,36609,36417,36609,36417,36609,36417,36609,36417,36609,36417,36609,36289,36609,36289,36609,36289,36609,36289,36609,36289,36609,36289,36609,36545,36609,36545,37633,36865,37633,36865,37633,36929,37633,36929,37633,36865,37633,36865,36609,36417,36609,36417,36609,36289,36609,36289,36289,36609,36609,36417,36609,36289,36609,36289,36609,36289,36609,36289,36609,36417,36609,36417,36609,36417,36609,36417,36609,36417,36609,36417,36609,36417,36609,36417,36609,36289,36609,36289,36609,36289,36609,36289,36609,36289,36609,36289,36609,36545,36609,36545,37633,36865,37633,36865,37633,36929,37633,36929,37633,36865,37633,36865,36609,36417,36609,36417,36609,36289,36609,36289,36289,36609,
	0,4867,2499,2179,2499,2179,2627,2179,2627,2179,2627,2179,2627,2179,2499,2179,2499,2179,2499,2499,2755,2755,3075,3075,3139,3139,3203,2179,2435,2627,2499,2179,2499,2179,2499,2179,2499,2179,2627,2179,2627,2179,2627,2179,2627,2179,2499,2179,2499,2179,2499,2499,2755,2755,3075,3075,3139,3139,3203,2179,2435,2627,2499,2179,2499,
	0,0
};
static const uint16_t PROGMEM nyan[]={
	8962,
	0,21889,22017,21632,21697,21184,21632,21568,21185,21185,21569,21633,21632,21568,21184,21568,21696,21888,22016,21696,21888,21568,21696,21184,21568,21184,21697,21889,22016,21696,21888,21568,21696,21184,21632,21696,21632,21568,21184,21568,21633,21184,21568,21696,21888,21568,21632,21568,21184,21569,21185,21569,21889,22017,21632,21697,21184,21632,21568,21185,21185,21569,21633,21632,21568,21184,21568,21696,21888,22016,21696,21888,21568,21696,21184,21568,21184,21697,21889,22016,21696,21888,21568,21696,21184,21632,21696,21632,21568,21184,21568,21633,21184,21568,21696,21888,21568,21632,21568,21184,21569,21185,21185,21185,20864,20992,21185,20864,20992,21184,21568,21696,21184,21760,21696,21760,21888,21185,21185,20864,20992,21184,20864,21760,21696,21568,21184,20864,20672,20736,20864,21185,20864,20992,21185,20864,20992,21184,21184,21568,21696,21184,20864,20992,20864,21185,21184,21120,21184,20864,20992,21184,21760,21696,21760,21888,21185,21121,21185,20864,20992,21185,20864,20992,21184,21568,21696,21184,21760,21696,21760,21888,21185,21185,20864,20992,21184,20864,21760,21696,21568,21184,20864,20672,20736,20864,21185,20864,20992,21185,20864,20992,21184,21184,21568,21696,21184,20864,20992,20864,21185,21184,21120,21184,20864,20992,21184,21760,21696,21760,21888,21185,21569,
	0,19713,19713,19841,19841,19649,19649,19969,19969,19521,19521,19841,19841,19137,19137,19136,19584,19520,19136,19713,19713,19841,19841,19649,19649,19969,19969,19521,19521,19841,19841,19137,19137,19136,19520,19584,19648,19713,19713,19841,19841,19649,19649,19969,19969,19521,19521,19841,19841,19137,19137,19136,19584,19520,19136,19713,19713,19841,19841,19649,19649,19969,19969,19521,19521,19841,19841,19137,19137,19136,19520,19584,19648,19713,19713,19841,19841,19649,19649,19969,19969,19521,19521,19841,19841,19137,19137,19136,19584,19520,19136,19713,19713,19841,19841,19649,19649,19969,19969,19521,19521,19841,19841,19137,19137,19136,19520,19584,19648,19713,19713,19841,19841,19649,19649,19969,19969,19521,19521,19841,19841,19137,19137,19136,19584,19520,19136,19713,19713,19841,19841,19649,19649,19969,19969,19521,19521,19841,19841,19137,19137,19136,19520,19584,19648,
	0,0
};
static const uint16_t PROGMEM sanpo[]={
	23041,
	0,21959,21955,22531,21955,22531,22659,21955,22659,22791,22787,22855,22787,22663,22531,22215,22083,21963,21959,21955,22531,21955,22531,22659,21955,22659,22791,22787,22855,22787,22663,22211,22531,22083,22211,22531,23299,23299,21637,21765,21829,21893,21957,22085,22213,22533,22667,21955,21955,21955,21975,22091,21955,21827,21763,21643,22091,21963,21827,21763,21635,21515,21963,21835,21827,21763,21635,21509,21189,21061,21189,21515,21507,21763,21955,22539,23307,21771,21963,22551,21963,22091,21975,22279,21507,21767,21955,22539,22215,22083,21975,22295,22087,22083,22087,22091,22531,22215,22083,21975,22295,22087,21955,22087,21955,21643,21771,21527,22295,22023,22019,22023,22043,21963,21959,21979,21835,21835,21835,21639,21787,22295,21515,22539,22219,21959,22107,22279,22083,22215,22531,22667,22539,22219,22091,21975,22295,22535,22211,22535,21955,21771,22535,22235,22283,21959,21955,22091,22283,22219,22283,22533,22533,22149,22021,21893,21765,21701,21573,21509,21509,21125,20997,20869,20741,20677,20549,20491,21507,21763,21955,22539,
	0,3083,3851,3083,3851,3083,3083,3083,3851,3083,3851,3083,3851,3083,3083,3083,3851,3205,3333,3397,3461,3525,3653,3781,4101,4235,3531,3531,3851,3403,3403,3531,3403,3339,3339,2635,2635,3211,3211,3531,3531,3083,3083,3083,3851,3083,3083,3083,3083,3211,3211,2507,2507,3083,2763,2635,2635,3211,3211,2507,2507,3403,3403,3403,3403,3339,3339,2635,2635,3211,3211,2507,2507,3083,3083,3083,3851,3403,3403,3403,3403,3339,3339,3339,3339,3211,3211,3531,3531,3083,3083,3083,2763,2635,2635,3339,3339,3403,3403,3403,3339,3211,3211,3467,3467,3531,3403,3339,3211,3083,3083,3083,3083,3339,3339,3339,3851,3403,3851,3531,3851,3095,3095,3095,3095,3083,2507,3083,
	0,21295,21295,21295,21295,21295,21295,21255,20483,21255,20483,20231,20163,20231,20163,20231,20163,20231,20163,20231,20035,20231,20035,20231,20035,20231,20035,20231,20163,20231,20163,20231,19907,20231,19907,19467,20235,20231,19907,20231,19907,20231,19907,20231,19907,20231,20035,20231,20035,20231,20163,20231,19907,20231,19907,20231,19907,20231,20035,20231,20035,20231,20035,20231,20035,20231,20163,20231,20163,20231,20483,21255,20483,21255,20483,21255,20483,20231,20163,20231,19907,20231,20035,20231,19715,20231,19779,20231,19779,20231,19907,20231,19907,20231,19907,20231,19907,19467,20235,20231,20483,21255,20483,21255,20483,21255,20483,20231,20163,20231,20163,20231,20163,20231,20099,20231,20035,20231,20035,20231,20163,20231,19907,20231,19907,20231,19907,20231,19907,20231,19971,20231,20035,20231,20035,20231,20163,20231,20163,21255,20483,21255,20483,21255,20483,21255,20483,21255,20611,21255,20611,21255,20611,21255,20611,20231,20163,20231,20163,20231,20035,20231,19971,20231,19907,20231,19907,20231,19907,20231,19907,20231,20163,20231,20163,20171,20235,20491,21259,20619,21259,20747,21259,20747,21259,20939,21259,21131,21259,21515,20939,20491,
	0,0
};
#endif