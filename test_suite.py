from rtps_test_utilities import ReturnCode

# rtps_test_suite_1 is a dictionary where we define the TestSuite
# (with its TestCases that we will test in interoperability_report.py).
# The dictionary has the following structure:
#       'name' : [parameters_publisher, parameters_subscriber,
#              expected_return_code_publisher, expected_return_code_subscriber]
# where:
#       * name: TestCase's name (defined by us)
#       * parameters_publisher: parameters the shape_main application
#         uses for the publisher process
#       * parameters_subscriber: parameters the shape_main application
#         uses for the subscriber process
#       * expected_return_code_publisher: expected publisher ReturnCode
#         for a succeed test execution.
#       * expected_return_code_subscriber: expected subscriber ReturnCode
#         for a succeed test execution.
#
# There are also two testCases that contains more parameters:
#       Test_Ownership_3 and Test_Ownership_4.
# That is because these two cases run two publishers and one subscriber.
# These two cases are handled manually in the interoperability_report.py
# script.
# The parameters in this case are:
#       * name: TestCase's name (defined by us)
#       * parameters_publisher1: parameters the shape_main application
#         uses for the publisher1 process
#       * parameters_publisher2: parameters the shape_main application
#         uses for the publisher2 process
#       * parameters_subscriber: parameters the shape_main application
#         uses for the subscriber process
#       * expected_return_code_publisher1: expected publisher1 ReturnCode
#         for a succeed test execution.
#       * expected_return_code_publisher2: expected publisher2 ReturnCode
#         for a succeed test execution.
#       * expected_return_code_subscriber: expected subscriber ReturnCode
#         for a succeed test execution.

rtps_test_suite_1 = {
    # DATA REPRESENTATION
    'Test_DataRepresentation_0' : ['-P -t Square -x 1', '-S -t Square -x 1', ReturnCode.DATA_NOT_CORRECT, ReturnCode.OK],
    'Test_DataRepresentation_1' : ['-P -t Square -x 1', '-S -t Square -x 2', ReturnCode.INCOMPATIBLE_QOS, ReturnCode.INCOMPATIBLE_QOS]
}
