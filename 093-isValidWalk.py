# import codewars_test as test

# @test.describe('Walk Validator - fixed tests')
# def sample_tests():
#     @test.it ("should return true for a valid walk")
#     def _():
#         test.assert_equals(is_valid_walk(['n','s','n','s','n','s','n','s','n','s']), True, 'should return True');
#     @test.it ("should return false if walk is too long")
#     def _():
#         test.assert_equals(is_valid_walk(['w','e','w','e','w','e','w','e','w','e','w','e']), False, 'should return False');
#     @test.it ("should return false if walk is too short")
#     def _():
#         test.assert_equals(is_valid_walk(['w']), False, 'should return False');
#     @test.it ("should return false if walk does not bring you back to start")
#     def _():
#         test.assert_equals(is_valid_walk(['n','n','n','s','n','s','n','s','n','s']), False, 'should return False');


def is_valid_walk(walk):
    n = walk.count("n")
    s = walk.count("s")
    w = walk.count("w")
    e = walk.count("e")

    if len(walk) != 10:
        return False

    return n == s and w == e
