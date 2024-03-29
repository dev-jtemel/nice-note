/*
 * MIT License
 *
 * Copyright (c) 2024 dev.jtemel@gmail.com
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef NN__PARSER__HEADER_PARSER__HPP
#define NN__PARSER__HEADER_PARSER__HPP

#include "nn/parser/BaseParser.hpp"

namespace nn {
namespace parser {

/**
 * @brief Parse a header line.
 * 
 * Syntax: (range of 1-6 # preceding text)
 *   # Header 1
 *   ## Header 2
 *   ### Header 3
 *   #### Header 4
 *   ##### Header 5
 *   ###### Header 6
 */
class HeaderParser : public BaseParser {
 public:
  HeaderParser();
  ~HeaderParser() = default;

  std::shared_ptr<ds::node::BaseNode> attemptParse(const std::string& line) override;
};

}  // namespace parser
}  // namespace nn

#endif  // NN__PARSER__HEADER_PARSER__HPP