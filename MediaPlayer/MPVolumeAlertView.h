/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIAlertView.h>
#import "UIModalViewDelegate.h"

@class NSString;

@interface MPVolumeAlertView : UIAlertView <UIAlertViewDelegate> {
	NSString* _volumeAudioCategory;
}
-(void)dealloc;
-(id)volumeView;
-(void)setVolumeAudioCategory:(id)category;
-(void)layout;
@end

