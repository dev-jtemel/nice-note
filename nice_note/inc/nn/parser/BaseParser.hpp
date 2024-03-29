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

#ifndef NN__PARSER__BASE_PARSER__HPP
#define NN__PARSER__BASE_PARSER__HPP

#include <memory>
#include <regex>
#include <string>

#include "nn/ds/node/BaseNode.hpp"

namespace nn {
namespace parser {

/**
 * @brief Abstract base class for all parsers. This is used to capture and
 * process lines of NiceNoteText.
 */
class BaseParser {
 public:
  BaseParser() = default;
  BaseParser(std::string&& regex) : m_regex(regex){};

  virtual ~BaseParser() = default;

  /**
   * @brief Attempt to parse a line of NiceNoteText and return the applicable
   * node on success.
   *
   * @param line The line to parse.
   * @return std::shared_ptr<ds::BaseNode> Pointer to the generated (or
   * modified) node.
   */
  virtual std::shared_ptr<ds::node::BaseNode> attemptParse(
      const std::string& line) = 0;

 protected:
  std::regex m_regex{};
  std::smatch m_match{};

 private:
  std::regex c_emptyRegex{R"(^\s*$)"};
};

}  // namespace parser
}  // namespace nn

#endif  // NN__PARSER__BASE_PARSER__HPP