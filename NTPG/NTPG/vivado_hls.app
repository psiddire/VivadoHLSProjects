<project xmlns="com.autoesl.autopilot.project" name="NTPG" top="TPG">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" csimMode="2" lastCsimMode="2" compiler="true"/>
    </Simulation>
    <files xmlns="">
        <file name="../../TestTPG.cpp" sc="0" tb="1" cflags=" -DHW_COSIM"/>
        <file name="TPG.cc" sc="0" tb="false" cflags=""/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

