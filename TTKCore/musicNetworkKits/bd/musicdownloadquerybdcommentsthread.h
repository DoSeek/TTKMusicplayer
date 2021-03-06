#ifndef MUSICDOWNLOADQUERYBDCOMMENTSTHREAD_H
#define MUSICDOWNLOADQUERYBDCOMMENTSTHREAD_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2015 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include "musicdownloadquerythreadabstract.h"

/*! @brief The class to baidu query song comments download data from net.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_NETWORK_EXPORT MusicDownLoadQueryBDCommentsThread : public MusicDownLoadQueryThreadAbstract
{
    Q_OBJECT
public:
    explicit MusicDownLoadQueryBDCommentsThread(QObject *parent = 0);
    /*!
     * Object contsructor.
     */

    virtual ~MusicDownLoadQueryBDCommentsThread();

    static QString getClassName();
    /*!
     * Get class object name.
     */

    virtual void startSearchSong(QueryType type, const QString &name) override;
    /*!
     * Start to Search data from name.
     */
    virtual void startSearchSong(int offset) override;
    /*!
     * Start to search data from name and type bt paging.
     */

Q_SIGNALS:
    void createSearchedItems(const MusicSongCommentItem &comments);
    /*!
     * Create the current song comment.
     */

public Q_SLOTS:
    virtual void downLoadFinished() override;
    /*!
     * Download data from net finished.
     */

};

#endif // MUSICDOWNLOADQUERYBDCOMMENTSTHREAD_H
