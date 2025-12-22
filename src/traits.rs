use core::fmt::Display;
use core::ops::{Add, BitAnd, BitOr, Div, Mul, Shl, Shr, Sub};

pub(crate) trait UInt:
    Copy
    + From<u8>
    + From<bool>
    + Add<Output = Self>
    + Sub<Output = Self>
    + Mul<Output = Self>
    + Div<Output = Self>
    + BitAnd<Output = Self>
    + BitOr<Output = Self>
    + Shl<i32, Output = Self>
    + Shl<u32, Output = Self>
    + Shr<i32, Output = Self>
    + Shr<u32, Output = Self>
    + PartialOrd
    + Into<u64>
    + Display
{
    fn wrapping_sub(self, other: Self) -> Self;
    fn truncate(wide: u64) -> Self;
}

impl UInt for u64 {
    fn wrapping_sub(self, other: Self) -> Self {
        self.wrapping_sub(other)
    }
    fn truncate(wide: u64) -> Self {
        wide
    }
}
