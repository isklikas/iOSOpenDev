/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"

@class SBWallpaperClipView;

@interface SBWallpaperNotchView : SBUnknownSuperclass {
	XXStruct_9ihRqB _notchInfo;	// 48 = 0x30
	SBWallpaperClipView *_clipView;	// 68 = 0x44
}
- (id)initWithFrame:(CGRect)frame wallpaperView:(id)view notchInfo:(XXStruct_9ihRqB)info;	// 0x14a91d
- (void)dealloc;	// 0x14ab35
- (void)setNotchInfo:(XXStruct_9ihRqB)info;	// 0x14aaf9
- (void)drawRect:(CGRect)rect;	// 0x14aa51
@end
