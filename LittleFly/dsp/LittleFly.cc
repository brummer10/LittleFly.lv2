// generated from file './/LittleFly.dsp' by dsp2cc:
// Code generated with Faust 2.20.2 (https://faust.grame.fr)


namespace LittleFly {
const static double fmydspSIG0Wave0[200] = {0.0,0.001897054068,0.0070173601510000001,0.013671863929,0.020536805597,0.027279298487,0.033776527969999998,0.040037354753,0.046070324603,0.051883678996,0.057485365492999999,0.062883047817000007,0.068084115629000005,0.073095694000000003,0.077924652597999994,0.082577614578999994,0.087060965200999998,0.091380860157000005,0.095543233635999994,0.099553806125999997,0.103418091952,0.107141406567,0.110728873598,0.114185431654,0.117515840899,0.12072468941300001,0.12381639931799999,0.12679523271199999,0.12966529738099999,0.132430552324,0.135094813088,0.137661756902,0.14013492765300001,0.14251774066799999,0.144813487342,0.14702533959399999,0.14915635417299999,0.151209476806,0.15318754620399999,0.15509329791900001,0.15692936807399999,0.158698296953,0.16040253246300001,0.16204443347700001,0.163626273056,0.16515024154999999,0.166618449601,0.16803293102299999,0.16939564559199999,0.17070848172700001,0.171973259076,0.173191731017,0.17436558705899999,0.175496455158,0.176585903957,0.17763544493899999,0.17864653450099999,0.179620575959,0.18055892147399999,0.181462873917,0.18233368865399999,0.18317257528200001,0.183980699287,0.18475918365300001,0.18550911040699999,0.18623152211300001,0.18692742330100001,0.18759778186199999,0.18824353037300001,0.18886556738900001,0.18946475868099999,0.19004193842600001,0.190597910367,0.19113344891199999,0.19164930021099999,0.19214618318099999,0.192624790499,0.19308578956399999,0.19352982341,0.193957511602,0.19436945108699999,0.19476621701999999,0.19514836356099999,0.195516424637,0.195870914683,0.19621232935300001,0.19654114620099999,0.196857825348,0.19716281011100001,0.19745652762400001,0.19773938941899999,0.19801179200499999,0.19827411741000001,0.19852673371099999,0.19876999554300001,0.199004244591,0.199229810062,0.19944700913999999,0.19965614742400001,0.199857519352,0.20005140861099999,0.200238088525,0.200417822434,0.200590864063,0.20075745786800001,0.20091783937499999,0.20107223551,0.20122086490900001,0.201363938223,0.201501658408,0.20163422100600001,0.20176181441800001,0.20188462016100001,0.20200281312500001,0.20211656180900001,0.20222602855800001,0.20233136978499999,0.20243273619300001,0.202530272978,0.202624120031,0.20271441213399999,0.202801279147,0.20288484618399999,0.20296523379,0.20304255810499999,0.203116931029,0.203188460371,0.203257250005,0.20332340000900001,0.20338700680300001,0.20344816328900001,0.203506958973,0.20356348009,0.203617809728,0.203670027936,0.20372021184200001,0.203768435755,0.20381477126899999,0.203859287364,0.203902050498,0.20394312470500001,0.20398257167600001,0.204020450849,0.204056819493,0.204091732783,0.20412524387799999,0.204157403998,0.20418826248700001,0.204217866892,0.20424626301900001,0.20427349500200001,0.20429960536299999,0.20432463507099999,0.20434862359799999,0.204371608973,0.204393627838,0.204414715494,0.204434905956,0.20445423199099999,0.20447272517500001,0.20449041592600001,0.204507333554,0.204523506296,0.20453896135899999,0.20455372495499999,0.20456782234000001,0.20458127784499999,0.20459411491599999,0.204606356139,0.20461802327600001,0.20462913729400001,0.20463971839600001,0.204649786045,0.204659358993,0.20466845530800001,0.20467709239699999,0.20468528703200001,0.204693055372,0.204700412986,0.20470737487499999,0.20471395548900001,0.20472016875499999,0.20472602808699999,0.204731546411,0.204736736181,0.204741609395,0.20474617761399999,0.204750451976,0.20475444321200001,0.204758161661,0.20476161728600001,0.20476481968400001,0.20476777810300001,0.20477050145100001,0.204772998313,0.20477527696,0.204777345359,0.204779211189,0.204780881847,0.204782364459};
class mydspSIG0 {
	
  private:
	
	int fmydspSIG0Wave0_idx;
	
  public:
	
	int getNumInputsmydspSIG0() {
		return 0;
	}
	int getNumOutputsmydspSIG0() {
		return 1;
	}
	int getInputRatemydspSIG0(int channel) {
		int rate;
		switch ((channel)) {
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	int getOutputRatemydspSIG0(int channel) {
		int rate;
		switch ((channel)) {
			case 0: {
				rate = 0;
				break;
			}
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	
	void instanceInitmydspSIG0(int sample_rate) {
		fmydspSIG0Wave0_idx = 0;
	}
	
	void fillmydspSIG0(int count, double* table) {
		for (int i = 0; (i < count); i = (i + 1)) {
			table[i] = fmydspSIG0Wave0[fmydspSIG0Wave0_idx];
			fmydspSIG0Wave0_idx = ((1 + fmydspSIG0Wave0_idx) % 200);
		}
	}

};

static mydspSIG0* newmydspSIG0() { return (mydspSIG0*)new mydspSIG0(); }
static void deletemydspSIG0(mydspSIG0* dsp) { delete dsp; }

const static double fmydspSIG1Wave0[200] = {0.0,-0.0018980050479999999,-0.0070205701290000002,-0.013677549823,-0.020555997477000001,-0.0274084232,-0.034158565856000002,-0.040771644040999998,-0.047229533412000001,-0.053522479567,-0.059645502093,-0.065596570911000004,-0.071375579391999996,-0.076983720995000005,-0.082423089005000005,-0.087696407951999997,-0.092806847080999996,-0.097757887177,-0.102553223348,-0.10719669278000001,-0.111692220176,-0.116043776228,-0.120255345715,-0.124330902701,-0.12827439131500001,-0.13208971082000001,-0.135780704009,-0.13935114825,-0.14280474863199999,-0.146145132776,-0.149375847004,-0.15250035364200001,-0.15552202917800001,-0.158444163163,-0.16126995770399999,-0.164002527442,-0.166644899928,-0.16920001631600001,-0.171670732331,-0.17405981944500001,-0.176369966224,-0.17860377981,-0.18076378751800001,-0.18285243850499999,-0.18487210542099999,-0.18682508632700001,-0.18871360653399999,-0.190539820262,-0.192305812534,-0.19401360097799999,-0.19566513759599999,-0.197262310493,-0.19880694548899999,-0.20030080754599999,-0.20174560173700001,-0.203142972822,-0.20449449787499999,-0.20580098450500001,-0.207061069189,-0.20827423827200001,-0.20944223384499999,-0.21056673331199999,-0.21164935179,-0.21269164442300001,-0.21369510860900001,-0.214661186143,-0.21559126528299999,-0.216486682737,-0.217348725577,-0.21817863308499999,-0.21897759852400001,-0.21974677084700001,-0.22048725634399999,-0.221200120227,-0.22188638815299999,-0.22254704769399999,-0.223183049749,-0.223795309911,-0.22438470977200001,-0.224952098189,-0.22549829250100001,-0.22602407969300001,-0.22653021752999999,-0.227017435638,-0.22748643655199999,-0.227937896719,-0.22837246746600001,-0.22879077593700001,-0.229193425989,-0.229580999053,-0.229954054973,-0.23031313280499999,-0.23065875158499999,-0.230991411078,-0.23131159249399999,-0.23161975916899999,-0.231916357239,-0.23220181627200001,-0.23247654988499999,-0.232740956336,-0.23299541909499999,-0.23324030739400001,-0.23347597675199999,-0.233702769491,-0.23392101521600001,-0.234131031298,-0.23433312332,-0.23452758552,-0.23471470120900001,-0.234894743179,-0.235067974091,-0.23523464685500001,-0.235395004987,-0.23554928296399999,-0.23569770655399999,-0.23584049314300001,-0.23597785204300001,-0.23610998479600001,-0.23623708545800001,-0.23635934088300001,-0.23647693098200001,-0.236590028989,-0.23669880170400001,-0.23680340973399999,-0.23690400772,-0.237000744565,-0.237093763639,-0.23718320299099999,-0.23726919554199999,-0.23735186927900001,-0.23743134743399999,-0.23750774866800001,-0.23758118722999999,-0.237651773131,-0.23771961229399999,-0.237784806712,-0.237847454589,-0.23790765048099999,-0.23796548543599999,-0.23802104712,-0.23807441994299999,-0.238125685181,-0.238174921092,-0.23822220302899999,-0.23826760354599999,-0.23831119250400001,-0.238353037169,-0.23839320230899999,-0.238431750287,-0.23846874115200001,-0.238504232722,-0.23853828066800001,-0.238570938595,-0.23860225811399999,-0.23863228892499999,-0.238661078878,-0.23868867404899999,-0.238715118802,-0.23874045585299999,-0.238764726333,-0.238787969845,-0.23881022452299999,-0.23883152708300001,-0.23885191287900001,-0.238871415951,-0.23889006907599999,-0.23890790381400001,-0.238924950552,-0.238941238551,-0.23895679598299999,-0.23897164997600001,-0.238985826648,-0.23899935115000001,-0.239012247697,-0.23902453960699999,-0.23903624933000001,-0.239047398483,-0.23905800788199999,-0.23906809756799999,-0.23907768683799999,-0.239086794273,-0.23909543776600001,-0.239103634541,-0.239111401187,-0.23911875367499999,-0.23912570738200001,-0.23913227711599999,-0.23913847713399999,-0.23914432116500001,-0.239149822426,-0.239154993644,-0.23915984707499999,-0.23916439451800001,-0.23916864733500001,-0.23917261646599999,-0.23917631244400001,-0.23917974541100001,-0.23918292513299999,-0.239185861014,-0.23918856210700001};
class mydspSIG1 {
	
  private:
	
	int fmydspSIG1Wave0_idx;
	
  public:
	
	int getNumInputsmydspSIG1() {
		return 0;
	}
	int getNumOutputsmydspSIG1() {
		return 1;
	}
	int getInputRatemydspSIG1(int channel) {
		int rate;
		switch ((channel)) {
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	int getOutputRatemydspSIG1(int channel) {
		int rate;
		switch ((channel)) {
			case 0: {
				rate = 0;
				break;
			}
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	
	void instanceInitmydspSIG1(int sample_rate) {
		fmydspSIG1Wave0_idx = 0;
	}
	
	void fillmydspSIG1(int count, double* table) {
		for (int i = 0; (i < count); i = (i + 1)) {
			table[i] = fmydspSIG1Wave0[fmydspSIG1Wave0_idx];
			fmydspSIG1Wave0_idx = ((1 + fmydspSIG1Wave0_idx) % 200);
		}
	}

};

static mydspSIG1* newmydspSIG1() { return (mydspSIG1*)new mydspSIG1(); }
static void deletemydspSIG1(mydspSIG1* dsp) { delete dsp; }

static double ftbl0mydspSIG0[200];
static double ftbl1mydspSIG1[200];


class Dsp: public PluginLV2 {
private:
	uint32_t fSampleRate;
	double fConst0;
	double fConst1;
	double fConst2;
	double fConst3;
	double fConst4;
	double fConst5;
	double fConst6;
	double fConst7;
	double fConst8;
	double fConst9;
	double fConst10;
	double fConst11;
	double fConst12;
	double fConst13;
	double fConst14;
	double fConst15;
	double fConst16;
	double fConst17;
	double fConst18;
	double fConst19;
	double fRec5[5];
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT	*fVslider0_;
	double fRec6[2];
	double fConst20;
	double fConst21;
	double fVec0[2];
	double fConst22;
	double fConst23;
	double fConst24;
	double fRec4[2];
	double fConst25;
	double fConst26;
	double fRec3[3];
	double fConst27;
	double fConst28;
	double fConst29;
	double fConst30;
	double fConst31;
	double fConst32;
	double fConst33;
	double fConst34;
	double fConst35;
	double fConst36;
	double fRec2[3];
	double fConst37;
	double fConst38;
	double fConst39;
	double fConst40;
	double fConst41;
	double fConst42;
	double fConst43;
	double fConst44;
	double fConst45;
	double fRec1[3];
	double fConst46;
	double fConst47;
	double fConst48;
	double fConst49;
	double fConst50;
	double fConst51;
	double fConst52;
	double fConst53;
	double fConst54;
	double fRec0[3];
	double fConst55;
	double fConst56;
	double fRec7[2];
	int iRec8[2];
	double fRec9[2];
	double fConst57;
	double fConst58;
	double fConst59;
	double fRec10[2];
	int iRec11[2];
	double fRec12[2];
	double fConst60;
	double fConst61;
	double fConst62;
	double fConst63;
	double fRec18[2];
	double fRec17[3];
	double fVec1[2];
	double fConst64;
	double fConst65;
	double fRec16[2];
	double fConst66;
	double fRec15[3];
	double fConst67;
	double fRec14[3];
	double fRec13[3];
	double fRec19[2];
	int iRec20[2];
	double fRec21[2];
	double fRec22[2];
	int iRec23[2];
	double fRec24[2];
	double fConst68;
	double fConst69;
	double fConst70;
	double fRec29[2];
	double fRec28[3];
	double fVec2[2];
	double fConst71;
	double fConst72;
	double fRec27[2];
	double fConst73;
	double fRec26[3];
	double fConst74;
	double fRec25[3];
	double fRec30[2];
	int iRec31[2];
	double fRec32[2];
	double fRec33[2];
	int iRec34[2];
	double fRec35[2];
	double fConst75;
	double fConst76;
	double fConst77;
	double fRec39[2];
	double fRec38[3];
	double fVec3[2];
	double fConst78;
	double fConst79;
	double fRec37[2];
	double fConst80;
	double fRec36[3];
	double fConst81;
	double fRec40[2];
	int iRec41[2];
	double fRec42[2];
	double fRec43[2];
	int iRec44[2];
	double fRec45[2];
	double fConst82;
	double fRec47[2];
	double fRec46[3];
	double fRec48[2];
	int iRec49[2];
	double fRec50[2];
	double fRec51[2];
	int iRec52[2];
	double fRec53[2];

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t sample_rate);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t sample_rate, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "littlefly";
	name = N_("LittleFly");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int l0 = 0; (l0 < 5); l0 = (l0 + 1)) fRec5[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fRec6[l1] = 0.0;
	for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) fVec0[l2] = 0.0;
	for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) fRec4[l3] = 0.0;
	for (int l4 = 0; (l4 < 3); l4 = (l4 + 1)) fRec3[l4] = 0.0;
	for (int l5 = 0; (l5 < 3); l5 = (l5 + 1)) fRec2[l5] = 0.0;
	for (int l6 = 0; (l6 < 3); l6 = (l6 + 1)) fRec1[l6] = 0.0;
	for (int l7 = 0; (l7 < 3); l7 = (l7 + 1)) fRec0[l7] = 0.0;
	for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) fRec7[l8] = 0.0;
	for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) iRec8[l9] = 0;
	for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) fRec9[l10] = 0.0;
	for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) fRec10[l11] = 0.0;
	for (int l12 = 0; (l12 < 2); l12 = (l12 + 1)) iRec11[l12] = 0;
	for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) fRec12[l13] = 0.0;
	for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) fRec18[l14] = 0.0;
	for (int l15 = 0; (l15 < 3); l15 = (l15 + 1)) fRec17[l15] = 0.0;
	for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) fVec1[l16] = 0.0;
	for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) fRec16[l17] = 0.0;
	for (int l18 = 0; (l18 < 3); l18 = (l18 + 1)) fRec15[l18] = 0.0;
	for (int l19 = 0; (l19 < 3); l19 = (l19 + 1)) fRec14[l19] = 0.0;
	for (int l20 = 0; (l20 < 3); l20 = (l20 + 1)) fRec13[l20] = 0.0;
	for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) fRec19[l21] = 0.0;
	for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) iRec20[l22] = 0;
	for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) fRec21[l23] = 0.0;
	for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) fRec22[l24] = 0.0;
	for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) iRec23[l25] = 0;
	for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) fRec24[l26] = 0.0;
	for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) fRec29[l27] = 0.0;
	for (int l28 = 0; (l28 < 3); l28 = (l28 + 1)) fRec28[l28] = 0.0;
	for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) fVec2[l29] = 0.0;
	for (int l30 = 0; (l30 < 2); l30 = (l30 + 1)) fRec27[l30] = 0.0;
	for (int l31 = 0; (l31 < 3); l31 = (l31 + 1)) fRec26[l31] = 0.0;
	for (int l32 = 0; (l32 < 3); l32 = (l32 + 1)) fRec25[l32] = 0.0;
	for (int l33 = 0; (l33 < 2); l33 = (l33 + 1)) fRec30[l33] = 0.0;
	for (int l34 = 0; (l34 < 2); l34 = (l34 + 1)) iRec31[l34] = 0;
	for (int l35 = 0; (l35 < 2); l35 = (l35 + 1)) fRec32[l35] = 0.0;
	for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) fRec33[l36] = 0.0;
	for (int l37 = 0; (l37 < 2); l37 = (l37 + 1)) iRec34[l37] = 0;
	for (int l38 = 0; (l38 < 2); l38 = (l38 + 1)) fRec35[l38] = 0.0;
	for (int l39 = 0; (l39 < 2); l39 = (l39 + 1)) fRec39[l39] = 0.0;
	for (int l40 = 0; (l40 < 3); l40 = (l40 + 1)) fRec38[l40] = 0.0;
	for (int l41 = 0; (l41 < 2); l41 = (l41 + 1)) fVec3[l41] = 0.0;
	for (int l42 = 0; (l42 < 2); l42 = (l42 + 1)) fRec37[l42] = 0.0;
	for (int l43 = 0; (l43 < 3); l43 = (l43 + 1)) fRec36[l43] = 0.0;
	for (int l44 = 0; (l44 < 2); l44 = (l44 + 1)) fRec40[l44] = 0.0;
	for (int l45 = 0; (l45 < 2); l45 = (l45 + 1)) iRec41[l45] = 0;
	for (int l46 = 0; (l46 < 2); l46 = (l46 + 1)) fRec42[l46] = 0.0;
	for (int l47 = 0; (l47 < 2); l47 = (l47 + 1)) fRec43[l47] = 0.0;
	for (int l48 = 0; (l48 < 2); l48 = (l48 + 1)) iRec44[l48] = 0;
	for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) fRec45[l49] = 0.0;
	for (int l50 = 0; (l50 < 2); l50 = (l50 + 1)) fRec47[l50] = 0.0;
	for (int l51 = 0; (l51 < 3); l51 = (l51 + 1)) fRec46[l51] = 0.0;
	for (int l52 = 0; (l52 < 2); l52 = (l52 + 1)) fRec48[l52] = 0.0;
	for (int l53 = 0; (l53 < 2); l53 = (l53 + 1)) iRec49[l53] = 0;
	for (int l54 = 0; (l54 < 2); l54 = (l54 + 1)) fRec50[l54] = 0.0;
	for (int l55 = 0; (l55 < 2); l55 = (l55 + 1)) fRec51[l55] = 0.0;
	for (int l56 = 0; (l56 < 2); l56 = (l56 + 1)) iRec52[l56] = 0;
	for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) fRec53[l57] = 0.0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t sample_rate)
{
	mydspSIG0* sig0 = newmydspSIG0();
	sig0->instanceInitmydspSIG0(sample_rate);
	sig0->fillmydspSIG0(200, ftbl0mydspSIG0);
	mydspSIG1* sig1 = newmydspSIG1();
	sig1->instanceInitmydspSIG1(sample_rate);
	sig1->fillmydspSIG1(200, ftbl1mydspSIG1);
	deletemydspSIG0(sig0);
	deletemydspSIG1(sig1);
	fSampleRate = sample_rate;
	fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSampleRate)));
	fConst1 = std::tan((20517.741620594938 / fConst0));
	fConst2 = (1.0 / fConst1);
	fConst3 = (1.0 / (((fConst2 + 1.0000000000000004) / fConst1) + 1.0));
	fConst4 = mydsp_faustpower2_f(fConst1);
	fConst5 = (1.0 / fConst4);
	fConst6 = mydsp_faustpower2_f(fConst0);
	fConst7 = (1.8180504733059299e-19 * fConst0);
	fConst8 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst7 + 3.1307615672786398e-16)) + 1.2127828895887799e-13)) + 7.1596028064968303e-13)) + 8.2091625339262005e-13);
	fConst9 = (fConst6 / fConst8);
	fConst10 = (fConst2 + 1.0);
	fConst11 = (1.0 / (fConst1 * fConst10));
	fConst12 = (9.5912207794467193e-15 * fConst0);
	fConst13 = (fConst12 + 6.6951616542739703e-16);
	fConst14 = (1.0 / fConst8);
	fConst15 = (7.2722018932237099e-19 * fConst0);
	fConst16 = ((fConst0 * ((fConst6 * (-6.2615231345572797e-16 - fConst15)) + 1.4319205612993699e-12)) + 3.2836650135704802e-12);
	fConst17 = ((fConst6 * ((1.0908302839835599e-18 * fConst6) + -2.42556577917757e-13)) + 4.9254975203557199e-12);
	fConst18 = ((fConst0 * ((fConst6 * (6.2615231345572797e-16 - fConst15)) + -1.4319205612993699e-12)) + 3.2836650135704802e-12);
	fConst19 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst7 + -3.1307615672786398e-16)) + 1.2127828895887799e-13)) + -7.1596028064968303e-13)) + 8.2091625339262005e-13);
	fConst20 = (1.9182441558893401e-14 * fConst0);
	fConst21 = (6.6951616542739703e-16 - fConst12);
	fConst22 = (0.0 - fConst11);
	fConst23 = (1.0 - fConst2);
	fConst24 = (fConst23 / fConst10);
	fConst25 = (((fConst2 + -1.0000000000000004) / fConst1) + 1.0);
	fConst26 = (2.0 * (1.0 - fConst5));
	fConst27 = (0.0 - (2.0 / fConst4));
	fConst28 = std::tan((3769.9111843077517 / fConst0));
	fConst29 = (1.0 / fConst28);
	fConst30 = (fConst29 + 1.0);
	fConst31 = (1.0 / ((fConst30 / fConst28) + 1.0));
	fConst32 = (1.0 - fConst29);
	fConst33 = (1.0 - (fConst32 / fConst28));
	fConst34 = mydsp_faustpower2_f(fConst28);
	fConst35 = (1.0 / fConst34);
	fConst36 = (2.0 * (1.0 - fConst35));
	fConst37 = std::tan((659.73445725385659 / fConst0));
	fConst38 = (1.0 / fConst37);
	fConst39 = (fConst38 + 1.0);
	fConst40 = (1.0 / ((fConst39 / fConst37) + 1.0));
	fConst41 = (1.0 - fConst38);
	fConst42 = (1.0 - (fConst41 / fConst37));
	fConst43 = mydsp_faustpower2_f(fConst37);
	fConst44 = (1.0 / fConst43);
	fConst45 = (2.0 * (1.0 - fConst44));
	fConst46 = std::tan((270.1769682087222 / fConst0));
	fConst47 = (1.0 / fConst46);
	fConst48 = (fConst47 + 1.0);
	fConst49 = (1.0 / ((fConst48 / fConst46) + 1.0));
	fConst50 = (1.0 - fConst47);
	fConst51 = (1.0 - (fConst50 / fConst46));
	fConst52 = mydsp_faustpower2_f(fConst46);
	fConst53 = (1.0 / fConst52);
	fConst54 = (2.0 * (1.0 - fConst53));
	fConst55 = ftbl0mydspSIG0[199];
	fConst56 = ftbl0mydspSIG0[0];
	fConst57 = (0.12 * std::fabs(ftbl0mydspSIG0[1]));
	fConst58 = ftbl1mydspSIG1[199];
	fConst59 = ftbl1mydspSIG1[0];
	fConst60 = (0.12 * std::fabs(ftbl1mydspSIG1[1]));
	fConst61 = (1.0 / (((fConst29 + 1.0000000000000004) / fConst28) + 1.0));
	fConst62 = (1.0 / (fConst28 * fConst30));
	fConst63 = (1.0 / fConst10);
	fConst64 = (0.0 - fConst62);
	fConst65 = (fConst32 / fConst30);
	fConst66 = (((fConst29 + -1.0000000000000004) / fConst28) + 1.0);
	fConst67 = (0.0 - (2.0 / fConst34));
	fConst68 = (1.0 / (((fConst38 + 1.0000000000000004) / fConst37) + 1.0));
	fConst69 = (1.0 / (fConst37 * fConst39));
	fConst70 = (1.0 / fConst30);
	fConst71 = (0.0 - fConst69);
	fConst72 = (fConst41 / fConst39);
	fConst73 = (((fConst38 + -1.0000000000000004) / fConst37) + 1.0);
	fConst74 = (0.0 - (2.0 / fConst43));
	fConst75 = (1.0 / (((fConst47 + 1.0000000000000004) / fConst46) + 1.0));
	fConst76 = (1.0 / (fConst46 * fConst48));
	fConst77 = (1.0 / fConst39);
	fConst78 = (0.0 - fConst76);
	fConst79 = (fConst50 / fConst48);
	fConst80 = (((fConst47 + -1.0000000000000004) / fConst46) + 1.0);
	fConst81 = (0.0 - (2.0 / fConst52));
	fConst82 = (1.0 / fConst48);
	clear_state_f();
}

void Dsp::init_static(uint32_t sample_rate, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(sample_rate);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fVslider0 (*fVslider0_)
	double fSlow0 = (0.0070000000000000062 * double(fVslider0));
	for (int i = 0; (i < count); i = (i + 1)) {
		fRec5[0] = (double(input0[i]) - (fConst14 * ((((fConst16 * fRec5[1]) + (fConst17 * fRec5[2])) + (fConst18 * fRec5[3])) + (fConst19 * fRec5[4]))));
		fRec6[0] = (fSlow0 + (0.99299999999999999 * fRec6[1]));
		double fTemp0 = (((((fConst13 * (fRec5[0] * fRec6[0])) + (fConst0 * (fRec5[1] * (0.0 - (1.9182441558893401e-14 * fRec6[0]))))) + (fRec5[2] * (0.0 - (1.3390323308547899e-15 * fRec6[0])))) + (fConst20 * (fRec6[0] * fRec5[3]))) + (fConst21 * (fRec6[0] * fRec5[4])));
		fVec0[0] = fTemp0;
		fRec4[0] = ((fConst9 * ((fConst11 * fTemp0) + (fConst22 * fVec0[1]))) - (fConst24 * fRec4[1]));
		fRec3[0] = (fRec4[0] - (fConst3 * ((fConst25 * fRec3[2]) + (fConst26 * fRec3[1]))));
		double fTemp1 = (fConst36 * fRec2[1]);
		fRec2[0] = ((fConst3 * (((fConst5 * fRec3[0]) + (fConst27 * fRec3[1])) + (fConst5 * fRec3[2]))) - (fConst31 * ((fConst33 * fRec2[2]) + fTemp1)));
		double fTemp2 = (fConst45 * fRec1[1]);
		fRec1[0] = ((fRec2[2] + (fConst31 * (fTemp1 + (fConst33 * fRec2[0])))) - (fConst40 * ((fConst42 * fRec1[2]) + fTemp2)));
		double fTemp3 = (fConst54 * fRec0[1]);
		fRec0[0] = ((fRec1[2] + (fConst40 * (fTemp2 + (fConst42 * fRec1[0])))) - (fConst49 * ((fConst51 * fRec0[2]) + fTemp3)));
		double fTemp4 = (fRec0[2] + (fConst49 * (fTemp3 + (fConst51 * fRec0[0]))));
		int iTemp5 = (fTemp4 < 0.0);
		int iTemp6 = (iRec8[1] < 4096);
		double fTemp7 = (142.143 * std::fabs(fTemp4));
		int iTemp8 = int(fTemp7);
		int iTemp9 = (iTemp8 < 0);
		int iTemp10 = (iTemp8 > 198);
		double fTemp11 = double(iTemp8);
		double fTemp12 = (fTemp11 + (1.0 - fTemp7));
		double fTemp13 = (fTemp7 - fTemp11);
		int iTemp14 = (iTemp8 + 1);
		double fTemp15 = (iTemp9 ? fConst56 : (iTemp10 ? fConst55 : ((ftbl0mydspSIG0[iTemp8] * fTemp12) + (fTemp13 * ftbl0mydspSIG0[iTemp14]))));
		double fTemp16 = std::fabs(fTemp15);
		fRec7[0] = (iTemp6 ? std::max<double>(fRec7[1], fTemp16) : fTemp16);
		iRec8[0] = (iTemp6 ? (iRec8[1] + 1) : 1);
		fRec9[0] = (iTemp6 ? fRec9[1] : fRec7[1]);
		double fTemp17 = double((iTemp5 ? -1 : 1));
		int iTemp18 = (iRec11[1] < 4096);
		double fTemp19 = (iTemp9 ? fConst59 : (iTemp10 ? fConst58 : ((fTemp12 * ftbl1mydspSIG1[iTemp8]) + (fTemp13 * ftbl1mydspSIG1[iTemp14]))));
		double fTemp20 = std::fabs(fTemp19);
		fRec10[0] = (iTemp18 ? std::max<double>(fRec10[1], fTemp20) : fTemp20);
		iRec11[0] = (iTemp18 ? (iRec11[1] + 1) : 1);
		fRec12[0] = (iTemp18 ? fRec12[1] : fRec10[1]);
		fRec18[0] = (0.0 - (fConst63 * ((fConst23 * fRec18[1]) - (fConst9 * (fTemp0 + fVec0[1])))));
		fRec17[0] = (fRec18[0] - (fConst3 * ((fConst25 * fRec17[2]) + (fConst26 * fRec17[1]))));
		double fTemp21 = (fRec17[2] + (fRec17[0] + (2.0 * fRec17[1])));
		fVec1[0] = fTemp21;
		fRec16[0] = ((fConst3 * ((fConst62 * fTemp21) + (fConst64 * fVec1[1]))) - (fConst65 * fRec16[1]));
		fRec15[0] = (fRec16[0] - (fConst61 * ((fConst66 * fRec15[2]) + (fConst36 * fRec15[1]))));
		double fTemp22 = (fConst45 * fRec14[1]);
		fRec14[0] = ((fConst61 * (((fConst35 * fRec15[0]) + (fConst67 * fRec15[1])) + (fConst35 * fRec15[2]))) - (fConst40 * ((fConst42 * fRec14[2]) + fTemp22)));
		double fTemp23 = (fConst54 * fRec13[1]);
		fRec13[0] = ((fRec14[2] + (fConst40 * (fTemp22 + (fConst42 * fRec14[0])))) - (fConst49 * ((fConst51 * fRec13[2]) + fTemp23)));
		double fTemp24 = (fRec13[2] + (fConst49 * (fTemp23 + (fConst51 * fRec13[0]))));
		int iTemp25 = (fTemp24 < 0.0);
		int iTemp26 = (iRec20[1] < 4096);
		double fTemp27 = (142.143 * std::fabs(fTemp24));
		int iTemp28 = int(fTemp27);
		int iTemp29 = (iTemp28 < 0);
		int iTemp30 = (iTemp28 > 198);
		double fTemp31 = double(iTemp28);
		double fTemp32 = (fTemp31 + (1.0 - fTemp27));
		double fTemp33 = (fTemp27 - fTemp31);
		int iTemp34 = (iTemp28 + 1);
		double fTemp35 = (iTemp29 ? fConst56 : (iTemp30 ? fConst55 : ((ftbl0mydspSIG0[iTemp28] * fTemp32) + (fTemp33 * ftbl0mydspSIG0[iTemp34]))));
		double fTemp36 = std::fabs(fTemp35);
		fRec19[0] = (iTemp26 ? std::max<double>(fRec19[1], fTemp36) : fTemp36);
		iRec20[0] = (iTemp26 ? (iRec20[1] + 1) : 1);
		fRec21[0] = (iTemp26 ? fRec21[1] : fRec19[1]);
		double fTemp37 = double((iTemp25 ? -1 : 1));
		int iTemp38 = (iRec23[1] < 4096);
		double fTemp39 = (iTemp29 ? fConst59 : (iTemp30 ? fConst58 : ((fTemp32 * ftbl1mydspSIG1[iTemp28]) + (fTemp33 * ftbl1mydspSIG1[iTemp34]))));
		double fTemp40 = std::fabs(fTemp39);
		fRec22[0] = (iTemp38 ? std::max<double>(fRec22[1], fTemp40) : fTemp40);
		iRec23[0] = (iTemp38 ? (iRec23[1] + 1) : 1);
		fRec24[0] = (iTemp38 ? fRec24[1] : fRec22[1]);
		fRec29[0] = (0.0 - (fConst70 * ((fConst32 * fRec29[1]) - (fConst3 * (fTemp21 + fVec1[1])))));
		fRec28[0] = (fRec29[0] - (fConst61 * ((fConst66 * fRec28[2]) + (fConst36 * fRec28[1]))));
		double fTemp41 = (fRec28[2] + (fRec28[0] + (2.0 * fRec28[1])));
		fVec2[0] = fTemp41;
		fRec27[0] = ((fConst61 * ((fConst69 * fTemp41) + (fConst71 * fVec2[1]))) - (fConst72 * fRec27[1]));
		fRec26[0] = (fRec27[0] - (fConst68 * ((fConst73 * fRec26[2]) + (fConst45 * fRec26[1]))));
		double fTemp42 = (fConst54 * fRec25[1]);
		fRec25[0] = ((fConst68 * (((fConst44 * fRec26[0]) + (fConst74 * fRec26[1])) + (fConst44 * fRec26[2]))) - (fConst49 * ((fConst51 * fRec25[2]) + fTemp42)));
		double fTemp43 = (fRec25[2] + (fConst49 * (fTemp42 + (fConst51 * fRec25[0]))));
		int iTemp44 = (fTemp43 < 0.0);
		int iTemp45 = (iRec31[1] < 4096);
		double fTemp46 = (142.143 * std::fabs(fTemp43));
		int iTemp47 = int(fTemp46);
		int iTemp48 = (iTemp47 < 0);
		int iTemp49 = (iTemp47 > 198);
		double fTemp50 = double(iTemp47);
		double fTemp51 = (fTemp50 + (1.0 - fTemp46));
		double fTemp52 = (fTemp46 - fTemp50);
		int iTemp53 = (iTemp47 + 1);
		double fTemp54 = (iTemp48 ? fConst56 : (iTemp49 ? fConst55 : ((ftbl0mydspSIG0[iTemp47] * fTemp51) + (fTemp52 * ftbl0mydspSIG0[iTemp53]))));
		double fTemp55 = std::fabs(fTemp54);
		fRec30[0] = (iTemp45 ? std::max<double>(fRec30[1], fTemp55) : fTemp55);
		iRec31[0] = (iTemp45 ? (iRec31[1] + 1) : 1);
		fRec32[0] = (iTemp45 ? fRec32[1] : fRec30[1]);
		double fTemp56 = double((iTemp44 ? -1 : 1));
		int iTemp57 = (iRec34[1] < 4096);
		double fTemp58 = (iTemp48 ? fConst59 : (iTemp49 ? fConst58 : ((fTemp51 * ftbl1mydspSIG1[iTemp47]) + (fTemp52 * ftbl1mydspSIG1[iTemp53]))));
		double fTemp59 = std::fabs(fTemp58);
		fRec33[0] = (iTemp57 ? std::max<double>(fRec33[1], fTemp59) : fTemp59);
		iRec34[0] = (iTemp57 ? (iRec34[1] + 1) : 1);
		fRec35[0] = (iTemp57 ? fRec35[1] : fRec33[1]);
		fRec39[0] = (0.0 - (fConst77 * ((fConst41 * fRec39[1]) - (fConst61 * (fTemp41 + fVec2[1])))));
		fRec38[0] = (fRec39[0] - (fConst68 * ((fConst73 * fRec38[2]) + (fConst45 * fRec38[1]))));
		double fTemp60 = (fRec38[2] + (fRec38[0] + (2.0 * fRec38[1])));
		fVec3[0] = fTemp60;
		fRec37[0] = ((fConst68 * ((fConst76 * fTemp60) + (fConst78 * fVec3[1]))) - (fConst79 * fRec37[1]));
		fRec36[0] = (fRec37[0] - (fConst75 * ((fConst80 * fRec36[2]) + (fConst54 * fRec36[1]))));
		double fTemp61 = (fConst75 * (((fConst53 * fRec36[0]) + (fConst81 * fRec36[1])) + (fConst53 * fRec36[2])));
		int iTemp62 = (fTemp61 < 0.0);
		int iTemp63 = (iRec41[1] < 4096);
		double fTemp64 = (142.143 * std::fabs(fTemp61));
		int iTemp65 = int(fTemp64);
		int iTemp66 = (iTemp65 < 0);
		int iTemp67 = (iTemp65 > 198);
		double fTemp68 = double(iTemp65);
		double fTemp69 = (fTemp68 + (1.0 - fTemp64));
		double fTemp70 = (fTemp64 - fTemp68);
		int iTemp71 = (iTemp65 + 1);
		double fTemp72 = (iTemp66 ? fConst56 : (iTemp67 ? fConst55 : ((ftbl0mydspSIG0[iTemp65] * fTemp69) + (fTemp70 * ftbl0mydspSIG0[iTemp71]))));
		double fTemp73 = std::fabs(fTemp72);
		fRec40[0] = (iTemp63 ? std::max<double>(fRec40[1], fTemp73) : fTemp73);
		iRec41[0] = (iTemp63 ? (iRec41[1] + 1) : 1);
		fRec42[0] = (iTemp63 ? fRec42[1] : fRec40[1]);
		double fTemp74 = double((iTemp62 ? -1 : 1));
		int iTemp75 = (iRec44[1] < 4096);
		double fTemp76 = (iTemp66 ? fConst59 : (iTemp67 ? fConst58 : ((fTemp69 * ftbl1mydspSIG1[iTemp65]) + (fTemp70 * ftbl1mydspSIG1[iTemp71]))));
		double fTemp77 = std::fabs(fTemp76);
		fRec43[0] = (iTemp75 ? std::max<double>(fRec43[1], fTemp77) : fTemp77);
		iRec44[0] = (iTemp75 ? (iRec44[1] + 1) : 1);
		fRec45[0] = (iTemp75 ? fRec45[1] : fRec43[1]);
		fRec47[0] = (0.0 - (fConst82 * ((fConst50 * fRec47[1]) - (fConst68 * (fTemp60 + fVec3[1])))));
		fRec46[0] = (fRec47[0] - (fConst75 * ((fConst80 * fRec46[2]) + (fConst54 * fRec46[1]))));
		double fTemp78 = (fConst75 * (fRec46[2] + (fRec46[0] + (2.0 * fRec46[1]))));
		int iTemp79 = (fTemp78 < 0.0);
		int iTemp80 = (iRec49[1] < 4096);
		double fTemp81 = (142.143 * std::fabs(fTemp78));
		int iTemp82 = int(fTemp81);
		int iTemp83 = (iTemp82 < 0);
		int iTemp84 = (iTemp82 > 198);
		double fTemp85 = double(iTemp82);
		double fTemp86 = (fTemp85 + (1.0 - fTemp81));
		double fTemp87 = (fTemp81 - fTemp85);
		int iTemp88 = (iTemp82 + 1);
		double fTemp89 = (iTemp83 ? fConst56 : (iTemp84 ? fConst55 : ((ftbl0mydspSIG0[iTemp82] * fTemp86) + (fTemp87 * ftbl0mydspSIG0[iTemp88]))));
		double fTemp90 = std::fabs(fTemp89);
		fRec48[0] = (iTemp80 ? std::max<double>(fRec48[1], fTemp90) : fTemp90);
		iRec49[0] = (iTemp80 ? (iRec49[1] + 1) : 1);
		fRec50[0] = (iTemp80 ? fRec50[1] : fRec48[1]);
		double fTemp91 = double((iTemp79 ? -1 : 1));
		int iTemp92 = (iRec52[1] < 4096);
		double fTemp93 = (iTemp83 ? fConst59 : (iTemp84 ? fConst58 : ((fTemp86 * ftbl1mydspSIG1[iTemp82]) + (fTemp87 * ftbl1mydspSIG1[iTemp88]))));
		double fTemp94 = std::fabs(fTemp93);
		fRec51[0] = (iTemp92 ? std::max<double>(fRec51[1], fTemp94) : fTemp94);
		iRec52[0] = (iTemp92 ? (iRec52[1] + 1) : 1);
		fRec53[0] = (iTemp92 ? fRec53[1] : fRec51[1]);
		output0[i] = FAUSTFLOAT((((((iTemp5 ? (fTemp17 * std::fabs(((fRec12[0] < fConst60) ? mydsp_faustpower3_f(fTemp19) : fTemp19))) : (std::fabs(((fRec9[0] < fConst57) ? mydsp_faustpower3_f(fTemp15) : fTemp15)) * fTemp17)) + (iTemp25 ? (fTemp37 * std::fabs(((fRec24[0] < fConst60) ? mydsp_faustpower3_f(fTemp39) : fTemp39))) : (std::fabs(((fRec21[0] < fConst57) ? mydsp_faustpower3_f(fTemp35) : fTemp35)) * fTemp37))) + (iTemp44 ? (fTemp56 * std::fabs(((fRec35[0] < fConst60) ? mydsp_faustpower3_f(fTemp58) : fTemp58))) : (std::fabs(((fRec32[0] < fConst57) ? mydsp_faustpower3_f(fTemp54) : fTemp54)) * fTemp56))) + (iTemp62 ? (fTemp74 * std::fabs(((fRec45[0] < fConst60) ? mydsp_faustpower3_f(fTemp76) : fTemp76))) : (std::fabs(((fRec42[0] < fConst57) ? mydsp_faustpower3_f(fTemp72) : fTemp72)) * fTemp74))) + (iTemp79 ? (fTemp91 * std::fabs(((fRec53[0] < fConst60) ? mydsp_faustpower3_f(fTemp93) : fTemp93))) : (std::fabs(((fRec50[0] < fConst57) ? mydsp_faustpower3_f(fTemp89) : fTemp89)) * fTemp91))));
		for (int j0 = 4; (j0 > 0); j0 = (j0 - 1)) {
			fRec5[j0] = fRec5[(j0 - 1)];
		}
		fRec6[1] = fRec6[0];
		fVec0[1] = fVec0[0];
		fRec4[1] = fRec4[0];
		fRec3[2] = fRec3[1];
		fRec3[1] = fRec3[0];
		fRec2[2] = fRec2[1];
		fRec2[1] = fRec2[0];
		fRec1[2] = fRec1[1];
		fRec1[1] = fRec1[0];
		fRec0[2] = fRec0[1];
		fRec0[1] = fRec0[0];
		fRec7[1] = fRec7[0];
		iRec8[1] = iRec8[0];
		fRec9[1] = fRec9[0];
		fRec10[1] = fRec10[0];
		iRec11[1] = iRec11[0];
		fRec12[1] = fRec12[0];
		fRec18[1] = fRec18[0];
		fRec17[2] = fRec17[1];
		fRec17[1] = fRec17[0];
		fVec1[1] = fVec1[0];
		fRec16[1] = fRec16[0];
		fRec15[2] = fRec15[1];
		fRec15[1] = fRec15[0];
		fRec14[2] = fRec14[1];
		fRec14[1] = fRec14[0];
		fRec13[2] = fRec13[1];
		fRec13[1] = fRec13[0];
		fRec19[1] = fRec19[0];
		iRec20[1] = iRec20[0];
		fRec21[1] = fRec21[0];
		fRec22[1] = fRec22[0];
		iRec23[1] = iRec23[0];
		fRec24[1] = fRec24[0];
		fRec29[1] = fRec29[0];
		fRec28[2] = fRec28[1];
		fRec28[1] = fRec28[0];
		fVec2[1] = fVec2[0];
		fRec27[1] = fRec27[0];
		fRec26[2] = fRec26[1];
		fRec26[1] = fRec26[0];
		fRec25[2] = fRec25[1];
		fRec25[1] = fRec25[0];
		fRec30[1] = fRec30[0];
		iRec31[1] = iRec31[0];
		fRec32[1] = fRec32[0];
		fRec33[1] = fRec33[0];
		iRec34[1] = iRec34[0];
		fRec35[1] = fRec35[0];
		fRec39[1] = fRec39[0];
		fRec38[2] = fRec38[1];
		fRec38[1] = fRec38[0];
		fVec3[1] = fVec3[0];
		fRec37[1] = fRec37[0];
		fRec36[2] = fRec36[1];
		fRec36[1] = fRec36[0];
		fRec40[1] = fRec40[0];
		iRec41[1] = iRec41[0];
		fRec42[1] = fRec42[0];
		fRec43[1] = fRec43[0];
		iRec44[1] = iRec44[0];
		fRec45[1] = fRec45[0];
		fRec47[1] = fRec47[0];
		fRec46[2] = fRec46[1];
		fRec46[1] = fRec46[0];
		fRec48[1] = fRec48[0];
		iRec49[1] = iRec49[0];
		fRec50[1] = fRec50[0];
		fRec51[1] = fRec51[0];
		iRec52[1] = iRec52[0];
		fRec53[1] = fRec53[0];
	}
#undef fVslider0
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case VOLUME: 
		fVslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   VOLUME, 
} PortIndex;
*/

} // end namespace LittleFly
