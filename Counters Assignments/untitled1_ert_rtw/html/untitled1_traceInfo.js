function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled1"};
	this.sidHashMap["untitled1"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "untitled1:6"};
	this.sidHashMap["untitled1:6"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "untitled1:2"};
	this.sidHashMap["untitled1:2"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Input1"] = {sid: "untitled1:3"};
	this.sidHashMap["untitled1:3"] = {rtwname: "<Root>/Input1"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "untitled1:6"};
	this.sidHashMap["untitled1:6"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "untitled1:5"};
	this.sidHashMap["untitled1:5"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "untitled1:7"};
	this.sidHashMap["untitled1:7"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "untitled1:8"};
	this.sidHashMap["untitled1:8"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "untitled1:4"};
	this.sidHashMap["untitled1:4"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "untitled1:9"};
	this.sidHashMap["untitled1:9"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
