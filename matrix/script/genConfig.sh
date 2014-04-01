numTaskPerClient=$1
numAllTask=$2
matrixSrcPath=$3
zhtSrcPath=$4
DagType=$5
DagArgument=$6

workloadFile=$matrixSrcPath
workloadFile+=/workload

memFile=$matrixSrcPath
memFile+=/memlist

zhtCfgFile=$zhtSrcPath
zhtCfgFile+=/zht.conf

zhtmemFile=$zhtSrcPath
zhtmemFile+=/neighbor

matrixConfig=$matrixSrcPath
matrixConfig+=/config

echo -e "NumTaskPerClient\t$numTaskPerClient\nNumAllTask\t$numAllTask\nNumCorePerExecutor\t2\nMaxTaskPerPkg\t50\n\nMonitorInterval\t10000\nSchedulerPortNo\t60000\nSleepLength\t10000\nWorkStealOn\t1\nWorkStealPollIntervalStart\t1000\nWorkStealPollIntervalUpperBound\t1000000\n\nDataSizeThreshold\t1000\nSchedulerMemlistFile\t$memFile\nNetworkProtocol\tTCP\nDagType\t$DagType\nDagArgument\t$DagArgument\nHostIdentityType\thostname\n\nSubmissionMode\tbestcase\nWorkloadFile\t$workloadFile\nSchedulerWorkloadPath\t$matrixSrcPath\nClientLog\t1\nTaskLog\t1\nSystemLog\t1\nSchedulerLog\t1\n\nZhtMemlistFile\t$zhtmemFile\nZhtConfigFile\t$zhtCfgFile" > $matrixConfig

