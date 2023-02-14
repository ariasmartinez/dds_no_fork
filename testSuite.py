from utilities import ReturnCode

# timeout for pexpect. short_timeout for the cases where there should not be communication
# and long_timeout for the cases where there should be
short_timeout = 5
long_timeout = 20


ReturnCode.export_to(globals())

dict_param_expected_code_timeout = {
    # DATA REPRESENTATION
    'Test_DataRepresentation_0' : ['-P -t Square -x 1', '-S -t Square -x 1',
                         ReturnCode.DATA_NOT_CORRECT, ReturnCode.OK, long_timeout], 
    'Test_DataRepresentation_1' : ['-P -t Square -x 1', '-S -t Square -x 2', 
                         ReturnCode.INCOMPATIBLE_QOS, ReturnCode.INCOMPATIBLE_QOS, short_timeout]

}