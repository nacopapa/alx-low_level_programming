#!/bin/bash
read -p "File name: " name
echo "#!/bin/bash" > $name
chmod u+x $name
vim $name
