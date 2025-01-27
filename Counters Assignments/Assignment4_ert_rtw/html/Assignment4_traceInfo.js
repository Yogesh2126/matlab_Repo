function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Assignment4"};
	this.sidHashMap["Assignment4"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Assignment4:47"};
	this.sidHashMap["Assignment4:47"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Assignment4:12"};
	this.sidHashMap["Assignment4:12"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "Assignment4:21"};
	this.sidHashMap["Assignment4:21"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "Assignment4:45"};
	this.sidHashMap["Assignment4:45"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "Assignment4:47"};
	this.sidHashMap["Assignment4:47"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "Assignment4:46"};
	this.sidHashMap["Assignment4:46"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "Assignment4:48"};
	this.sidHashMap["Assignment4:48"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/AND"] = {sid: "Assignment4:13"};
	this.sidHashMap["Assignment4:13"] = {rtwname: "<S1>/AND"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "Assignment4:35"};
	this.sidHashMap["Assignment4:35"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Add1"] = {sid: "Assignment4:19"};
	this.sidHashMap["Assignment4:19"] = {rtwname: "<S1>/Add1"};
	this.rtwnameHashMap["<S1>/Compare To Constant"] = {sid: "Assignment4:12"};
	this.sidHashMap["Assignment4:12"] = {rtwname: "<S1>/Compare To Constant"};
	this.rtwnameHashMap["<S1>/Compare To Constant1"] = {sid: "Assignment4:21"};
	this.sidHashMap["Assignment4:21"] = {rtwname: "<S1>/Compare To Constant1"};
	this.rtwnameHashMap["<S1>/Constant1"] = {sid: "Assignment4:20"};
	this.sidHashMap["Assignment4:20"] = {rtwname: "<S1>/Constant1"};
	this.rtwnameHashMap["<S1>/Constant2"] = {sid: "Assignment4:24"};
	this.sidHashMap["Assignment4:24"] = {rtwname: "<S1>/Constant2"};
	this.rtwnameHashMap["<S1>/Display1"] = {sid: "Assignment4:23"};
	this.sidHashMap["Assignment4:23"] = {rtwname: "<S1>/Display1"};
	this.rtwnameHashMap["<S1>/Relational Operator"] = {sid: "Assignment4:41"};
	this.sidHashMap["Assignment4:41"] = {rtwname: "<S1>/Relational Operator"};
	this.rtwnameHashMap["<S1>/Switch"] = {sid: "Assignment4:14"};
	this.sidHashMap["Assignment4:14"] = {rtwname: "<S1>/Switch"};
	this.rtwnameHashMap["<S1>/Switch1"] = {sid: "Assignment4:22"};
	this.sidHashMap["Assignment4:22"] = {rtwname: "<S1>/Switch1"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "Assignment4:39"};
	this.sidHashMap["Assignment4:39"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Unit Delay1"] = {sid: "Assignment4:26"};
	this.sidHashMap["Assignment4:26"] = {rtwname: "<S1>/Unit Delay1"};
	this.rtwnameHashMap["<S1>/Unit Delay2"] = {sid: "Assignment4:27"};
	this.sidHashMap["Assignment4:27"] = {rtwname: "<S1>/Unit Delay2"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Assignment4:49"};
	this.sidHashMap["Assignment4:49"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "Assignment4:12:1"};
	this.sidHashMap["Assignment4:12:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/Compare"] = {sid: "Assignment4:12:2"};
	this.sidHashMap["Assignment4:12:2"] = {rtwname: "<S2>/Compare"};
	this.rtwnameHashMap["<S2>/Constant"] = {sid: "Assignment4:12:3"};
	this.sidHashMap["Assignment4:12:3"] = {rtwname: "<S2>/Constant"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "Assignment4:12:4"};
	this.sidHashMap["Assignment4:12:4"] = {rtwname: "<S2>/y"};
	this.rtwnameHashMap["<S3>/u"] = {sid: "Assignment4:21:1"};
	this.sidHashMap["Assignment4:21:1"] = {rtwname: "<S3>/u"};
	this.rtwnameHashMap["<S3>/Compare"] = {sid: "Assignment4:21:2"};
	this.sidHashMap["Assignment4:21:2"] = {rtwname: "<S3>/Compare"};
	this.rtwnameHashMap["<S3>/Constant"] = {sid: "Assignment4:21:3"};
	this.sidHashMap["Assignment4:21:3"] = {rtwname: "<S3>/Constant"};
	this.rtwnameHashMap["<S3>/y"] = {sid: "Assignment4:21:4"};
	this.sidHashMap["Assignment4:21:4"] = {rtwname: "<S3>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
