/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include <QtCore/QString>
#include <QtCore/QStringList>

namespace codegen {
namespace style {

struct Options {
	QStringList includePaths = { "." };
	QString outputPath = ".";
	QString inputPath;
	bool isPalette = false;
};

// Parsing failed if inputPath is empty in the result.
Options parseOptions();

} // namespace style
} // namespace codegen
