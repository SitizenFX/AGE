/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#include <AzCore/std/hash.h>

#include <QString>
#include <QModelIndex>

namespace AZStd
{
    // hash specialization
    template <>
    struct hash<QString>
    {
        size_t operator()(const QString& str) const
        {
            return qHash(str);
        }
    };

    template<>
    struct hash<QPersistentModelIndex>
    {
        size_t operator()(const QPersistentModelIndex& index) const
        {
            return qHash(index);
        }
    };
}
