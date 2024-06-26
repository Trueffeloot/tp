#
# Generate By: dol2asm
# Module: 386
#

# Libraries
LIBRARIES = [
	"d/a/npc/d_a_npc_zant",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_npc_zant",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".bss",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x80B6C0C0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C0EC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C118,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C138,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C154,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C1AC,'size':292,'pad':0,'label':"__dt__12daNpc_Zant_cFv",'name':"__dt__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C2D0,'size':676,'pad':0,'label':"create__12daNpc_Zant_cFv",'name':"create__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C574,'size':396,'pad':0,'label':"CreateHeap__12daNpc_Zant_cFv",'name':"CreateHeap__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C700,'size':52,'pad':0,'label':"Delete__12daNpc_Zant_cFv",'name':"Delete__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C734,'size':32,'pad':0,'label':"Execute__12daNpc_Zant_cFv",'name':"Execute__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C754,'size':148,'pad':0,'label':"Draw__12daNpc_Zant_cFv",'name':"Draw__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C7E8,'size':32,'pad':0,'label':"createHeapCallBack__12daNpc_Zant_cFP10fopAc_ac_c",'name':"createHeapCallBack__12daNpc_Zant_cFP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C808,'size':88,'pad':0,'label':"ctrlJointCallBack__12daNpc_Zant_cFP8J3DJointi",'name':"ctrlJointCallBack__12daNpc_Zant_cFP8J3DJointi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C860,'size':32,'pad':0,'label':"getType__12daNpc_Zant_cFv",'name':"getType__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C880,'size':28,'pad':0,'label':"getFlowNodeNo__12daNpc_Zant_cFv",'name':"getFlowNodeNo__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C89C,'size':48,'pad':0,'label':"isDelete__12daNpc_Zant_cFv",'name':"isDelete__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C8CC,'size':292,'pad':0,'label':"reset__12daNpc_Zant_cFv",'name':"reset__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6C9F0,'size':4,'pad':0,'label':"afterJntAnm__12daNpc_Zant_cFi",'name':"afterJntAnm__12daNpc_Zant_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6C9F4,'size':252,'pad':0,'label':"setParam__12daNpc_Zant_cFv",'name':"setParam__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6CAF0,'size':96,'pad':0,'label':"setAfterTalkMotion__12daNpc_Zant_cFv",'name':"setAfterTalkMotion__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6CB50,'size':4,'pad':0,'label':"srchActors__12daNpc_Zant_cFv",'name':"srchActors__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6CB54,'size':256,'pad':0,'label':"evtTalk__12daNpc_Zant_cFv",'name':"evtTalk__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6CC54,'size':200,'pad':0,'label':"evtCutProc__12daNpc_Zant_cFv",'name':"evtCutProc__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6CD1C,'size':236,'pad':0,'label':"action__12daNpc_Zant_cFv",'name':"action__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6CE08,'size':120,'pad':0,'label':"beforeMove__12daNpc_Zant_cFv",'name':"beforeMove__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6CE80,'size':500,'pad':0,'label':"setAttnPos__12daNpc_Zant_cFv",'name':"setAttnPos__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6D074,'size':308,'pad':0,'label':"setCollision__12daNpc_Zant_cFv",'name':"setCollision__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6D1A8,'size':8,'pad':0,'label':"drawDbgInfo__12daNpc_Zant_cFv",'name':"drawDbgInfo__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6D1B0,'size':108,'pad':0,'label':"drawGhost__12daNpc_Zant_cFv",'name':"drawGhost__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6D21C,'size':72,'pad':0,'label':"selectAction__12daNpc_Zant_cFv",'name':"selectAction__12daNpc_Zant_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6D264,'size':44,'pad':0,'label':"chkAction__12daNpc_Zant_cFM12daNpc_Zant_cFPCvPvPv_i",'name':"chkAction__12daNpc_Zant_cFM12daNpc_Zant_cFPCvPvPv_i",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6D290,'size':168,'pad':0,'label':"setAction__12daNpc_Zant_cFM12daNpc_Zant_cFPCvPvPv_i",'name':"setAction__12daNpc_Zant_cFM12daNpc_Zant_cFPCvPvPv_i",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6D338,'size':588,'pad':0,'label':"wait__12daNpc_Zant_cFPv",'name':"wait__12daNpc_Zant_cFPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6D584,'size':504,'pad':0,'label':"talk__12daNpc_Zant_cFPv",'name':"talk__12daNpc_Zant_cFPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6D77C,'size':32,'pad':0,'label':"daNpc_Zant_Create__FPv",'name':"daNpc_Zant_Create__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6D79C,'size':32,'pad':0,'label':"daNpc_Zant_Delete__FPv",'name':"daNpc_Zant_Delete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6D7BC,'size':32,'pad':0,'label':"daNpc_Zant_Execute__FPv",'name':"daNpc_Zant_Execute__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6D7DC,'size':32,'pad':0,'label':"daNpc_Zant_Draw__FPv",'name':"daNpc_Zant_Draw__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6D7FC,'size':8,'pad':0,'label':"daNpc_Zant_IsDelete__FPv",'name':"daNpc_Zant_IsDelete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6D804,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6D84C,'size':904,'pad':0,'label':"__dt__8daNpcT_cFv",'name':"__dt__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6DBD4,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6DC10,'size':60,'pad':0,'label':"__dt__5csXyzFv",'name':"__dt__5csXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6DC4C,'size':1028,'pad':0,'label':"__ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'name':"__ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E050,'size':4,'pad':0,'label':"__ct__5csXyzFv",'name':"__ct__5csXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E054,'size':252,'pad':0,'label':"__dt__15daNpcT_JntAnm_cFv",'name':"__dt__15daNpcT_JntAnm_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E150,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E154,'size':72,'pad':0,'label':"__dt__18daNpcT_ActorMngr_cFv",'name':"__dt__18daNpcT_ActorMngr_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E19C,'size':72,'pad':0,'label':"__dt__22daNpcT_MotionSeqMngr_cFv",'name':"__dt__22daNpcT_MotionSeqMngr_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E1E4,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E254,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E2B0,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E320,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E368,'size':8,'pad':0,'label':"getEyeballMaterialNo__8daNpcT_cFv",'name':"getEyeballMaterialNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E370,'size':284,'pad':0,'label':"setEyeAngleY__15daNpcT_JntAnm_cF4cXyzsifs",'name':"setEyeAngleY__15daNpcT_JntAnm_cF4cXyzsifs",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E48C,'size':520,'pad':0,'label':"setEyeAngleX__15daNpcT_JntAnm_cF4cXyzfs",'name':"setEyeAngleX__15daNpcT_JntAnm_cF4cXyzfs",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E694,'size':8,'pad':0,'label':"getHeadJointNo__8daNpcT_cFv",'name':"getHeadJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E69C,'size':8,'pad':0,'label':"getNeckJointNo__8daNpcT_cFv",'name':"getNeckJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E6A4,'size':8,'pad':0,'label':"getBackboneJointNo__8daNpcT_cFv",'name':"getBackboneJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E6AC,'size':4,'pad':0,'label':"ctrlSubFaceMotion__8daNpcT_cFi",'name':"ctrlSubFaceMotion__8daNpcT_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E6B0,'size':8,'pad':0,'label':"checkChangeJoint__8daNpcT_cFi",'name':"checkChangeJoint__8daNpcT_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E6B8,'size':8,'pad':0,'label':"checkRemoveJoint__8daNpcT_cFi",'name':"checkRemoveJoint__8daNpcT_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E6C0,'size':8,'pad':0,'label':"getFootLJointNo__8daNpcT_cFv",'name':"getFootLJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E6C8,'size':8,'pad':0,'label':"getFootRJointNo__8daNpcT_cFv",'name':"getFootRJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E6D0,'size':8,'pad':0,'label':"getEyeballLMaterialNo__8daNpcT_cFv",'name':"getEyeballLMaterialNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E6D8,'size':8,'pad':0,'label':"getEyeballRMaterialNo__8daNpcT_cFv",'name':"getEyeballRMaterialNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E6E0,'size':8,'pad':0,'label':"checkChangeEvt__8daNpcT_cFv",'name':"checkChangeEvt__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E6E8,'size':8,'pad':0,'label':"evtEndProc__8daNpcT_cFv",'name':"evtEndProc__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E6F0,'size':4,'pad':0,'label':"afterMoved__8daNpcT_cFv",'name':"afterMoved__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E6F4,'size':8,'pad':0,'label':"chkXYItems__8daNpcT_cFv",'name':"chkXYItems__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E6FC,'size':24,'pad':0,'label':"decTmr__8daNpcT_cFv",'name':"decTmr__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E714,'size':4,'pad':0,'label':"drawOtherMdl__8daNpcT_cFv",'name':"drawOtherMdl__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E718,'size':8,'pad':0,'label':"afterSetFaceMotionAnm__8daNpcT_cFiifi",'name':"afterSetFaceMotionAnm__8daNpcT_cFiifi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E720,'size':8,'pad':0,'label':"afterSetMotionAnm__8daNpcT_cFiifi",'name':"afterSetMotionAnm__8daNpcT_cFiifi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E728,'size':48,'pad':0,'label':"getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c",'name':"getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E758,'size':48,'pad':0,'label':"getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c",'name':"getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E788,'size':4,'pad':0,'label':"changeAnm__8daNpcT_cFPiPi",'name':"changeAnm__8daNpcT_cFPiPi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E78C,'size':4,'pad':0,'label':"changeBck__8daNpcT_cFPiPi",'name':"changeBck__8daNpcT_cFPiPi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E790,'size':4,'pad':0,'label':"changeBtp__8daNpcT_cFPiPi",'name':"changeBtp__8daNpcT_cFPiPi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E794,'size':4,'pad':0,'label':"changeBtk__8daNpcT_cFPiPi",'name':"changeBtk__8daNpcT_cFPiPi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B6E798,'size':104,'pad':0,'label':"__sinit_d_a_npc_zant_cpp",'name':"__sinit_d_a_npc_zant_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80B6E800,'size':172,'pad':0,'label':"__ct__12daNpc_Zant_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'name':"__ct__12daNpc_Zant_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E8AC,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E8F4,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E93C,'size':72,'pad':0,'label':"__dt__18daNpc_Zant_Param_cFv",'name':"__dt__18daNpc_Zant_Param_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E984,'size':8,'pad':0,'label':"func_80B6E984",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E98C,'size':8,'pad':0,'label':"func_80B6E98C",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B6E994,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80B6E99C,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80B6E9A8,'size':140,'pad':0,'label':"m__18daNpc_Zant_Param_c",'name':"m__18daNpc_Zant_Param_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6EA34,'size':4,'pad':0,'label':"lit_4018",'name':"@4018",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80B6EA38,'size':4,'pad':0,'label':"lit_4019",'name':"@4019",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80B6EA3C,'size':4,'pad':0,'label':"lit_4020",'name':"@4020",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80B6EA40,'size':4,'pad':0,'label':"lit_4021",'name':"@4021",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80B6EA44,'size':4,'pad':0,'label':"lit_4022",'name':"@4022",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80B6EA48,'size':4,'pad':0,'label':"lit_4176",'name':"@4176",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6EA4C,'size':4,'pad':0,'label':"lit_4177",'name':"@4177",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80B6EA50,'size':4,'pad':0,'label':"lit_4178",'name':"@4178",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80B6EA54,'size':4,'pad':0,'label':"lit_4313",'name':"@4313",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80B6EA58,'size':4,'pad':0,'label':"lit_4447",'name':"@4447",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80B6EA5C,'size':4,'pad':0,'label':"lit_4559",'name':"@4559",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B6EA60,'size':8,'pad':0,'label':"lit_4561",'name':"@4561",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6EA68,'size':8,'pad':0,'label':"lit_4619",'name':"@4619",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6EA70,'size':8,'pad':0,'label':"lit_4620",'name':"@4620",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6EA78,'size':8,'pad':0,'label':"lit_4621",'name':"@4621",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6EA80,'size':18,'pad':0,'label':"d_a_npc_zant__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80B6EA94,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6EAA0,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B6EAB4,'size':8,'pad':0,'label':"l_bmdData",'name':"l_bmdData",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6EABC,'size':16,'pad':0,'label':"l_evtList",'name':"l_evtList",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B6EACC,'size':8,'pad':0,'label':"l_resNameList",'name':"l_resNameList",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B6EAD4,'size':2,'pad':2,'label':"l_loadResPtrn0",'name':"l_loadResPtrn0",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B6EAD8,'size':8,'pad':0,'label':"l_loadResPtrnList",'name':"l_loadResPtrnList",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B6EAE0,'size':28,'pad':0,'label':"l_faceMotionAnmData",'name':"l_faceMotionAnmData",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6EAFC,'size':28,'pad':0,'label':"l_motionAnmData",'name':"l_motionAnmData",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6EB18,'size':16,'pad':0,'label':"l_faceMotionSequenceData",'name':"l_faceMotionSequenceData",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6EB28,'size':16,'pad':0,'label':"l_motionSequenceData",'name':"l_motionSequenceData",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6EB38,'size':4,'pad':0,'label':"mCutNameList__12daNpc_Zant_c",'name':"mCutNameList__12daNpc_Zant_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B6EB3C,'size':12,'pad':0,'label':"mCutList__12daNpc_Zant_c",'name':"mCutList__12daNpc_Zant_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6EB48,'size':12,'pad':0,'label':"lit_4457",'name':"@4457",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B6EB54,'size':12,'pad':0,'label':"lit_4467",'name':"@4467",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B6EB60,'size':12,'pad':0,'label':"lit_4675",'name':"@4675",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B6EB6C,'size':32,'pad':0,'label':"daNpc_Zant_MethodTable",'name':"daNpc_Zant_MethodTable",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B6EB8C,'size':48,'pad':0,'label':"g_profile_NPC_ZANT",'name':"g_profile_NPC_ZANT",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B6EBBC,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B6EBC8,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B6EBEC,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B6EBF8,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B6EC04,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B6EC10,'size':12,'pad':0,'label':"__vt__22daNpcT_MotionSeqMngr_c",'name':"__vt__22daNpcT_MotionSeqMngr_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B6EC1C,'size':12,'pad':0,'label':"__vt__18daNpcT_ActorMngr_c",'name':"__vt__18daNpcT_ActorMngr_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B6EC28,'size':12,'pad':0,'label':"__vt__15daNpcT_JntAnm_c",'name':"__vt__15daNpcT_JntAnm_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B6EC34,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B6EC40,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B6EC4C,'size':196,'pad':0,'label':"__vt__12daNpc_Zant_c",'name':"__vt__12daNpc_Zant_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B6ED10,'size':12,'pad':0,'label':"__vt__18daNpc_Zant_Param_c",'name':"__vt__18daNpc_Zant_Param_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B6ED20,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6ED28,'size':12,'pad':0,'label':"lit_3811",'name':"@3811",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B6ED34,'size':4,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__dt__12daNpc_Zant_cFv":5,
	"create__12daNpc_Zant_cFv":6,
	"CreateHeap__12daNpc_Zant_cFv":7,
	"Delete__12daNpc_Zant_cFv":8,
	"Execute__12daNpc_Zant_cFv":9,
	"Draw__12daNpc_Zant_cFv":10,
	"createHeapCallBack__12daNpc_Zant_cFP10fopAc_ac_c":11,
	"ctrlJointCallBack__12daNpc_Zant_cFP8J3DJointi":12,
	"getType__12daNpc_Zant_cFv":13,
	"getFlowNodeNo__12daNpc_Zant_cFv":14,
	"isDelete__12daNpc_Zant_cFv":15,
	"reset__12daNpc_Zant_cFv":16,
	"afterJntAnm__12daNpc_Zant_cFi":17,
	"setParam__12daNpc_Zant_cFv":18,
	"setAfterTalkMotion__12daNpc_Zant_cFv":19,
	"srchActors__12daNpc_Zant_cFv":20,
	"evtTalk__12daNpc_Zant_cFv":21,
	"evtCutProc__12daNpc_Zant_cFv":22,
	"action__12daNpc_Zant_cFv":23,
	"beforeMove__12daNpc_Zant_cFv":24,
	"setAttnPos__12daNpc_Zant_cFv":25,
	"setCollision__12daNpc_Zant_cFv":26,
	"drawDbgInfo__12daNpc_Zant_cFv":27,
	"drawGhost__12daNpc_Zant_cFv":28,
	"selectAction__12daNpc_Zant_cFv":29,
	"chkAction__12daNpc_Zant_cFM12daNpc_Zant_cFPCvPvPv_i":30,
	"setAction__12daNpc_Zant_cFM12daNpc_Zant_cFPCvPvPv_i":31,
	"wait__12daNpc_Zant_cFPv":32,
	"talk__12daNpc_Zant_cFPv":33,
	"daNpc_Zant_Create__FPv":34,
	"daNpc_Zant_Delete__FPv":35,
	"daNpc_Zant_Execute__FPv":36,
	"daNpc_Zant_Draw__FPv":37,
	"daNpc_Zant_IsDelete__FPv":38,
	"__dt__10cCcD_GSttsFv":39,
	"__dt__8daNpcT_cFv":40,
	"__dt__4cXyzFv":41,
	"__dt__5csXyzFv":42,
	"__ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc":43,
	"__ct__5csXyzFv":44,
	"__dt__15daNpcT_JntAnm_cFv":45,
	"__ct__4cXyzFv":46,
	"__dt__18daNpcT_ActorMngr_cFv":47,
	"__dt__22daNpcT_MotionSeqMngr_cFv":48,
	"__dt__12dBgS_AcchCirFv":49,
	"__dt__10dCcD_GSttsFv":50,
	"__dt__12dBgS_ObjAcchFv":51,
	"__dt__12J3DFrameCtrlFv":52,
	"getEyeballMaterialNo__8daNpcT_cFv":53,
	"setEyeAngleY__15daNpcT_JntAnm_cF4cXyzsifs":54,
	"setEyeAngleX__15daNpcT_JntAnm_cF4cXyzfs":55,
	"getHeadJointNo__8daNpcT_cFv":56,
	"getNeckJointNo__8daNpcT_cFv":57,
	"getBackboneJointNo__8daNpcT_cFv":58,
	"ctrlSubFaceMotion__8daNpcT_cFi":59,
	"checkChangeJoint__8daNpcT_cFi":60,
	"checkRemoveJoint__8daNpcT_cFi":61,
	"getFootLJointNo__8daNpcT_cFv":62,
	"getFootRJointNo__8daNpcT_cFv":63,
	"getEyeballLMaterialNo__8daNpcT_cFv":64,
	"getEyeballRMaterialNo__8daNpcT_cFv":65,
	"checkChangeEvt__8daNpcT_cFv":66,
	"evtEndProc__8daNpcT_cFv":67,
	"afterMoved__8daNpcT_cFv":68,
	"chkXYItems__8daNpcT_cFv":69,
	"decTmr__8daNpcT_cFv":70,
	"drawOtherMdl__8daNpcT_cFv":71,
	"afterSetFaceMotionAnm__8daNpcT_cFiifi":72,
	"afterSetMotionAnm__8daNpcT_cFiifi":73,
	"getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c":74,
	"getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c":75,
	"changeAnm__8daNpcT_cFPiPi":76,
	"changeBck__8daNpcT_cFPiPi":77,
	"changeBtp__8daNpcT_cFPiPi":78,
	"changeBtk__8daNpcT_cFPiPi":79,
	"__sinit_d_a_npc_zant_cpp":80,
	"__ct__12daNpc_Zant_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc":81,
	"__dt__8cM3dGCylFv":82,
	"__dt__8cM3dGAabFv":83,
	"__dt__18daNpc_Zant_Param_cFv":84,
	"func_80B6E984":85,
	"func_80B6E98C":86,
	"_ctors":87,
	"_dtors":88,
	"m__18daNpc_Zant_Param_c":89,
	"lit_4018":90,
	"lit_4019":91,
	"lit_4020":92,
	"lit_4021":93,
	"lit_4022":94,
	"lit_4176":95,
	"lit_4177":96,
	"lit_4178":97,
	"lit_4313":98,
	"lit_4447":99,
	"lit_4559":100,
	"lit_4561":101,
	"lit_4619":102,
	"lit_4620":103,
	"lit_4621":104,
	"d_a_npc_zant__stringBase0":105,
	"cNullVec__6Z2Calc":106,
	"lit_1787":107,
	"l_bmdData":108,
	"l_evtList":109,
	"l_resNameList":110,
	"l_loadResPtrn0":111,
	"l_loadResPtrnList":112,
	"l_faceMotionAnmData":113,
	"l_motionAnmData":114,
	"l_faceMotionSequenceData":115,
	"l_motionSequenceData":116,
	"mCutNameList__12daNpc_Zant_c":117,
	"mCutList__12daNpc_Zant_c":118,
	"lit_4457":119,
	"lit_4467":120,
	"lit_4675":121,
	"daNpc_Zant_MethodTable":122,
	"g_profile_NPC_ZANT":123,
	"__vt__12J3DFrameCtrl":124,
	"__vt__12dBgS_ObjAcch":125,
	"__vt__12dBgS_AcchCir":126,
	"__vt__10cCcD_GStts":127,
	"__vt__10dCcD_GStts":128,
	"__vt__22daNpcT_MotionSeqMngr_c":129,
	"__vt__18daNpcT_ActorMngr_c":130,
	"__vt__15daNpcT_JntAnm_c":131,
	"__vt__8cM3dGAab":132,
	"__vt__8cM3dGCyl":133,
	"__vt__12daNpc_Zant_c":134,
	"__vt__18daNpc_Zant_Param_c":135,
	"__global_destructor_chain":136,
	"lit_3811":137,
	"l_HIO":138,
}

