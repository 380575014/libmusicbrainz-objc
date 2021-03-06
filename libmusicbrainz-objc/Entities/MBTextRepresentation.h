//
// @file MBTextRepresentation.h
// @author Joachim LeBlanc
// @date June 19 2012
// @copyright
//   2012 Joachim LeBlanc <demosdemon@gmail.com> \n
//   This program is made available under the terms of the MIT License.
//
// @brief

#import "MBEntity.h"

/// Represents a `<text-representation/>` element
@interface MBTextRepresentation : MBEntity

@property (nonatomic, readonly) NSString * Language;
@property (nonatomic, readonly) NSString * Script;

@end
