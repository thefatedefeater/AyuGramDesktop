// This is the source code of AyuGram for Desktop.
//
// We do not and cannot prevent the use of our code,
// but be respectful and credit the original author.
//
// Copyright @Radolyn, 2023

#pragma once

#include "ayu/sync/models.h"

#include "core/application.h"
#include "main/main_account.h"
#include "main/main_domain.h"
#include "main/main_session.h"

Main::Session* getSession(ID userId);
bool accountExists(ID userId);
void dispatchToMainThread(std::function<void()> callback);
not_null<History*> getHistoryFromDialogId(ID dialogId, Main::Session* session);
ID getDialogIdFromPeer(not_null<PeerData*> peer);