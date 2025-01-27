function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["untitled.c:40c32"]=1;
    this.traceFlag["untitled.c:48c7"]=1;
    this.traceFlag["untitled.c:48c38"]=1;
    this.traceFlag["untitled.c:81c34"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["untitled.c:40"]=1;
    this.lineTraceFlag["untitled.c:48"]=1;
    this.lineTraceFlag["untitled.c:49"]=1;
    this.lineTraceFlag["untitled.c:58"]=1;
    this.lineTraceFlag["untitled.c:81"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
