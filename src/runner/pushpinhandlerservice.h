/*
 * Copyright (C) 2016 Fanout, Inc.
 *
 * This file is part of Pushpin.
 *
 * $FANOUT_BEGIN_LICENSE:APACHE2$
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $FANOUT_END_LICENSE$
 */

#ifndef PUSHPINHANDLERSERVICE_H
#define PUSHPINHANDLERSERVICE_H

#include "service.h"

class PushpinHandlerService : public Service
{
	Q_OBJECT

public:
	PushpinHandlerService(
		const QString &binFile,
		const QString &configFile,
		const QString &runDir,
		const QString &logDir,
		const QString &ipcPrefix,
		const QString &filePrefix,
		int portOffset,
		int logLevel,
		QObject *parent = 0);

	// reimplemented

	virtual QStringList arguments() const;
	virtual bool acceptSighup() const;

private:
	QStringList args_;
};

#endif
