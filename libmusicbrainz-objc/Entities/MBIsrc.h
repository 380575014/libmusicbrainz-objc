//
// @file MBISRC.h
// @date Jun 06 2012
// @copyright
//   2012 Brandon LeBlanc <demosdemon@gmail.com> \n
//   This program is made avaliable under the terms of the MIT License.
//
// @brief ISRC Entity

#import "MBEntity.h"

/// Represents a `<isrc/>` element
@interface MBIsrc : MBEntity <MBUniqueIdentifier>

@property (nonatomic, readonly) NSString *Id;
@property (nonatomic, readonly) MBList *RecordingList;

@end

