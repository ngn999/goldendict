/* This file is (c) 2018 Igor Kushnir <igorkuo@gmail.com>
 * Part of GoldenDict. Licensed under GPLv3 or later, see the LICENSE file */

#ifdef MAKE_QTMULTIMEDIA_PLAYER

#include <QByteArray>
#include <QUrl>
#include <QAudioOutput>
#include "multimediaaudioplayer.hh"

MultimediaAudioPlayer::MultimediaAudioPlayer() :
  player(QMediaPlayer())
{
    QAudioOutput *audioOutput = new QAudioOutput;
    player.setAudioOutput( audioOutput );
    // typedef void( QMediaPlayer::* ErrorSignal )( QMediaPlayer::Error );
    // TODO: handle player error
    // connect( &player, static_cast< ErrorSignal >( &QMediaPlayer::error ),
    //       this, &MultimediaAudioPlayer::onMediaPlayerError );
}

QString MultimediaAudioPlayer::play( const char * data, int size )
{
  stop();

  audioBuffer.setData( data, size );
  if( !audioBuffer.open( QIODevice::ReadOnly ) )
    return tr( "Couldn't open audio buffer for reading." );

  // player.setMedia( QMediaContent(), &audioBuffer );
  // TODO:
  player.setSource(QUrl());
  player.play();
  return QString();
}

void MultimediaAudioPlayer::stop()
{
  // player.setMedia( QMediaContent() ); // Forget about audioBuffer.
  player.setSource(QUrl());
  audioBuffer.close();
  audioBuffer.setData( QByteArray() ); // Free memory.
}

void MultimediaAudioPlayer::onMediaPlayerError()
{
  emit error( player.errorString() );
}

#endif // MAKE_QTMULTIMEDIA_PLAYER
