/*!
 * \file AudioPlayback.h
 * \author masc4ii
 * \copyright 2017
 * \brief Handles the mlv audio playback
 */

#ifndef AUDIOPLAYBACK_H
#define AUDIOPLAYBACK_H

#include <QAudioOutput>
#include <QByteArray>
#include <QDataStream>
#include <Qt>
#include "../../src/mlv_include.h"

class AudioPlayback
{
public:
    explicit AudioPlayback( mlvObject_t *pMlvObject );
    ~AudioPlayback();
    void loadAudio( mlvObject_t *pMlvObject );
    void unloadAudio( void );
    void jumpToPos( int frame );
    void play( void );
    void stop( void );

private:
    mlvObject_t *m_pMlvObject;
    QByteArray *m_pByteArrayAudio;
    QDataStream *m_pAudioStream;
    QAudioOutput *m_pAudioOutput;
    uint8_t *m_pAudioData;
    uint64_t m_audio_size;
    bool m_audioLoaded;
};

#endif // AUDIOPLAYBACK_H
