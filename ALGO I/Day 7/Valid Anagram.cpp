class Solution {
 public:
  auto isAnagram(const string &s, const string &t) -> bool {
    vector<int> alphabetFreq(26, 0);

    for (const auto ch : s) ++alphabetFreq[ch - 'a'];
    for (const auto ch : t) --alphabetFreq[ch - 'a'];

    return all_of(alphabetFreq.cbegin(), alphabetFreq.cend(), [](int x) { return x == 0; });
  }
};